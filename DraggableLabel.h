#ifndef DraggableLabel_H
#define DraggableLabel_H

#include <QLabel>
#include <QDrag>
#include <QMimeData>
#include <QMouseEvent>


class DraggableLabel : public QLabel {
    Q_OBJECT
public:
    DraggableLabel();
    DraggableLabel(QWidget *parent = 0) : QLabel(parent) {
        setAcceptDrops(true);
    }
    void setDraggable(bool can_drag)
    {
        draggable = can_drag;
    }
    void updateLabelsFromBitboard(uint64_t bitboard, std::vector<DraggableLabel*>& draggableLabels){
        for (int i = 0; i < 64; i++) {
            DraggableLabel *label = draggableLabels[i];

            bool bit = (bitboard & (1ULL << i));

            if (bit) {
                label->setStyleSheet("border: 1px solid black;");
            }
        }
    }

protected:
    bool draggable = false;

    void mousePressEvent(QMouseEvent *event) override {
        if (!draggable) return;

        if (event->button() == Qt::LeftButton) {
            QDrag *Drag = new QDrag(this);
            QMimeData *mimeData = new QMimeData;


            // Here we could add any data we want to the mime data object
            mimeData->setText(this->styleSheet());
            Drag->setMimeData(mimeData);

            QPixmap pixmap(this->size());
            this->render(&pixmap);
            Drag->setPixmap(pixmap);

            Drag->exec();

            if (Drag->target() != this) {
                this->setStyleSheet("    border-image: url(:/img/blank.png) 0 0 0 0 stretch stretch;\\n");
                this->draggable = false;

            }
        }


    }

    void dragEnterEvent(QDragEnterEvent *event) override {
        if (event->mimeData()->hasText()) {
            emit dragEntered(this->objectName());
            event->acceptProposedAction();
        }
    }

    void dropEvent(QDropEvent *event) override {
        if (event->source() != this) {
            this->setStyleSheet(event->mimeData()->text());
        }
    }



signals:
    void dragEntered(QString objectName);

};


#endif // DraggableLabel_H
