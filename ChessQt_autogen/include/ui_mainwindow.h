/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../DraggableLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow5
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *chesswdg;
    QGridLayout *gridLayout_2;
    DraggableLabel *label_54;
    DraggableLabel *label_20;
    DraggableLabel *label_55;
    DraggableLabel *label_24;
    DraggableLabel *label_25;
    DraggableLabel *label_52;
    DraggableLabel *label_60;
    DraggableLabel *label_63;
    DraggableLabel *label_28;
    DraggableLabel *label_47;
    DraggableLabel *label_27;
    DraggableLabel *label_53;
    DraggableLabel *a1;
    DraggableLabel *label_37;
    DraggableLabel *label_39;
    DraggableLabel *label_5;
    DraggableLabel *label_49;
    DraggableLabel *label_51;
    DraggableLabel *label_56;
    DraggableLabel *label_26;
    DraggableLabel *label_4;
    DraggableLabel *label_64;
    DraggableLabel *label_65;
    DraggableLabel *label_19;
    DraggableLabel *label_40;
    DraggableLabel *label_62;
    DraggableLabel *label_17;
    DraggableLabel *label_6;
    DraggableLabel *label_42;
    DraggableLabel *label_10;
    DraggableLabel *label_15;
    DraggableLabel *label_22;
    DraggableLabel *label_2;
    DraggableLabel *label_46;
    DraggableLabel *label_59;
    DraggableLabel *label_3;
    DraggableLabel *label_43;
    DraggableLabel *label_32;
    DraggableLabel *label_21;
    DraggableLabel *label_58;
    DraggableLabel *label_45;
    DraggableLabel *label_36;
    DraggableLabel *label_12;
    DraggableLabel *label_34;
    DraggableLabel *label_13;
    DraggableLabel *label_29;
    DraggableLabel *label_33;
    DraggableLabel *label_38;
    DraggableLabel *label_23;
    DraggableLabel *label_30;
    DraggableLabel *label_48;
    DraggableLabel *label_14;
    DraggableLabel *label_44;
    DraggableLabel *label_11;
    DraggableLabel *label_16;
    DraggableLabel *label_31;
    DraggableLabel *label_57;
    DraggableLabel *label_35;
    DraggableLabel *label_41;
    DraggableLabel *label_7;
    DraggableLabel *label_8;
    DraggableLabel *label_61;
    DraggableLabel *label_50;
    DraggableLabel *label_18;
    QVBoxLayout *verticalLayout;
    DraggableLabel *label;
    DraggableLabel *label_67;
    DraggableLabel *label_66;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(845, 684);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        chesswdg = new QWidget(centralwidget);
        chesswdg->setObjectName("chesswdg");
        chesswdg->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chesswdg->sizePolicy().hasHeightForWidth());
        chesswdg->setSizePolicy(sizePolicy);
        chesswdg->setMinimumSize(QSize(600, 600));
        chesswdg->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/board.png\") 0 0 0 0 stretch stretch;"));
        gridLayout_2 = new QGridLayout(chesswdg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_54 = new DraggableLabel(chesswdg);
        label_54->setObjectName("label_54");
        label_54->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_54, 1, 3, 1, 1);

        label_20 = new DraggableLabel(chesswdg);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_20, 6, 4, 1, 1);

        label_55 = new DraggableLabel(chesswdg);
        label_55->setObjectName("label_55");
        label_55->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_55, 1, 4, 1, 1);

        label_24 = new DraggableLabel(chesswdg);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_24, 5, 1, 1, 1);

        label_25 = new DraggableLabel(chesswdg);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_25, 5, 2, 1, 1);

        label_52 = new DraggableLabel(chesswdg);
        label_52->setObjectName("label_52");
        label_52->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_52, 1, 1, 1, 1);

        label_60 = new DraggableLabel(chesswdg);
        label_60->setObjectName("label_60");
        label_60->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_bishop.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_60, 0, 2, 1, 1);

        label_63 = new DraggableLabel(chesswdg);
        label_63->setObjectName("label_63");
        label_63->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_bishop.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_63, 0, 5, 1, 1);

        label_28 = new DraggableLabel(chesswdg);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_28, 5, 5, 1, 1);

        label_47 = new DraggableLabel(chesswdg);
        label_47->setObjectName("label_47");
        label_47->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_47, 2, 3, 1, 1);

        label_27 = new DraggableLabel(chesswdg);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_27, 5, 4, 1, 1);

        label_53 = new DraggableLabel(chesswdg);
        label_53->setObjectName("label_53");
        label_53->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_53, 1, 2, 1, 1);

        a1 = new DraggableLabel(chesswdg);
        a1->setObjectName("a1");
        a1->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_rook.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(a1, 7, 0, 1, 1);

        label_37 = new DraggableLabel(chesswdg);
        label_37->setObjectName("label_37");
        label_37->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_37, 4, 7, 1, 1);

        label_39 = new DraggableLabel(chesswdg);
        label_39->setObjectName("label_39");
        label_39->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_39, 3, 2, 1, 1);

        label_5 = new DraggableLabel(chesswdg);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_49 = new DraggableLabel(chesswdg);
        label_49->setObjectName("label_49");
        label_49->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_49, 2, 5, 1, 1);

        label_51 = new DraggableLabel(chesswdg);
        label_51->setObjectName("label_51");
        label_51->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_51, 2, 7, 1, 1);

        label_56 = new DraggableLabel(chesswdg);
        label_56->setObjectName("label_56");
        label_56->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_56, 1, 5, 1, 1);

        label_26 = new DraggableLabel(chesswdg);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_26, 5, 3, 1, 1);

        label_4 = new DraggableLabel(chesswdg);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_64 = new DraggableLabel(chesswdg);
        label_64->setObjectName("label_64");
        label_64->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_knight.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_64, 0, 6, 1, 1);

        label_65 = new DraggableLabel(chesswdg);
        label_65->setObjectName("label_65");
        label_65->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_rook.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_65, 0, 7, 1, 1);

        label_19 = new DraggableLabel(chesswdg);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_19, 6, 3, 1, 1);

        label_40 = new DraggableLabel(chesswdg);
        label_40->setObjectName("label_40");
        label_40->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_40, 3, 3, 1, 1);

        label_62 = new DraggableLabel(chesswdg);
        label_62->setObjectName("label_62");
        label_62->setStyleSheet(QString::fromUtf8("border-image: url(\":/img/black_king.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_62, 0, 4, 1, 1);

        label_17 = new DraggableLabel(chesswdg);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_17, 6, 1, 1, 1);

        label_6 = new DraggableLabel(chesswdg);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_42 = new DraggableLabel(chesswdg);
        label_42->setObjectName("label_42");
        label_42->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_42, 3, 5, 1, 1);

        label_10 = new DraggableLabel(chesswdg);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_knight.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_10, 7, 1, 1, 1);

        label_15 = new DraggableLabel(chesswdg);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_knight.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_15, 7, 6, 1, 1);

        label_22 = new DraggableLabel(chesswdg);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_22, 6, 6, 1, 1);

        label_2 = new DraggableLabel(chesswdg);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_rook.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_46 = new DraggableLabel(chesswdg);
        label_46->setObjectName("label_46");
        label_46->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_46, 2, 2, 1, 1);

        label_59 = new DraggableLabel(chesswdg);
        label_59->setObjectName("label_59");
        label_59->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_knight.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_59, 0, 1, 1, 1);

        label_3 = new DraggableLabel(chesswdg);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_43 = new DraggableLabel(chesswdg);
        label_43->setObjectName("label_43");
        label_43->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_43, 3, 6, 1, 1);

        label_32 = new DraggableLabel(chesswdg);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_32, 4, 2, 1, 1);

        label_21 = new DraggableLabel(chesswdg);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_21, 6, 5, 1, 1);

        label_58 = new DraggableLabel(chesswdg);
        label_58->setObjectName("label_58");
        label_58->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_58, 1, 7, 1, 1);

        label_45 = new DraggableLabel(chesswdg);
        label_45->setObjectName("label_45");
        label_45->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_45, 2, 1, 1, 1);

        label_36 = new DraggableLabel(chesswdg);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_36, 4, 6, 1, 1);

        label_12 = new DraggableLabel(chesswdg);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_queen.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_12, 7, 3, 1, 1);

        label_34 = new DraggableLabel(chesswdg);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_34, 4, 4, 1, 1);

        label_13 = new DraggableLabel(chesswdg);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_king.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_13, 7, 4, 1, 1);

        label_29 = new DraggableLabel(chesswdg);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_29, 5, 6, 1, 1);

        label_33 = new DraggableLabel(chesswdg);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_33, 4, 3, 1, 1);

        label_38 = new DraggableLabel(chesswdg);
        label_38->setObjectName("label_38");
        label_38->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_38, 3, 1, 1, 1);

        label_23 = new DraggableLabel(chesswdg);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_23, 6, 7, 1, 1);

        label_30 = new DraggableLabel(chesswdg);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_30, 5, 7, 1, 1);

        label_48 = new DraggableLabel(chesswdg);
        label_48->setObjectName("label_48");
        label_48->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_48, 2, 4, 1, 1);

        label_14 = new DraggableLabel(chesswdg);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_bishop.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_14, 7, 5, 1, 1);

        label_44 = new DraggableLabel(chesswdg);
        label_44->setObjectName("label_44");
        label_44->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_44, 3, 7, 1, 1);

        label_11 = new DraggableLabel(chesswdg);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_bishop.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_11, 7, 2, 1, 1);

        label_16 = new DraggableLabel(chesswdg);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_rook.png\") 0 0 0 0 stretch stretch;\n"
""));

        gridLayout_2->addWidget(label_16, 7, 7, 1, 1);

        label_31 = new DraggableLabel(chesswdg);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_31, 4, 1, 1, 1);

        label_57 = new DraggableLabel(chesswdg);
        label_57->setObjectName("label_57");
        label_57->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_57, 1, 6, 1, 1);

        label_35 = new DraggableLabel(chesswdg);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_35, 4, 5, 1, 1);

        label_41 = new DraggableLabel(chesswdg);
        label_41->setObjectName("label_41");
        label_41->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_41, 3, 4, 1, 1);

        label_7 = new DraggableLabel(chesswdg);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_8 = new DraggableLabel(chesswdg);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        label_61 = new DraggableLabel(chesswdg);
        label_61->setObjectName("label_61");
        label_61->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/black_queen.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_61, 0, 3, 1, 1);

        label_50 = new DraggableLabel(chesswdg);
        label_50->setObjectName("label_50");
        label_50->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/blank.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_50, 2, 6, 1, 1);

        label_18 = new DraggableLabel(chesswdg);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("    border-image: url(\":/img/white_pawn.png\") 0 0 0 0 stretch stretch;\\n"));

        gridLayout_2->addWidget(label_18, 6, 2, 1, 1);


        horizontalLayout_2->addWidget(chesswdg);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new DraggableLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_67 = new DraggableLabel(centralwidget);
        label_67->setObjectName("label_67");

        verticalLayout->addWidget(label_67);

        label_66 = new DraggableLabel(centralwidget);
        label_66->setObjectName("label_66");

        verticalLayout->addWidget(label_66);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 845, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Log:", nullptr));
        label_67->setText(QCoreApplication::translate("MainWindow", "Ability Description:", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "Shop button or something lol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
