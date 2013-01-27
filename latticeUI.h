/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jan 27 16:21:15 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
#ifndef LATTICEUI_H
#define LATTICEUI_H

#include <QtCore/QVariant>
#include <QtGui>
#include <QAction>

QT_BEGIN_NAMESPACE

class Ui_Lattice
{
public:
    static const quint8 MaxRecentFilesNum = 5;

    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionRecentFiles[MaxRecentFilesNum];
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFont;
    QAction *actionBackGround;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionRecalculate;
    QAction *actionSort;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionSelectAll;
    QAction *actionOptions;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *submenuRecentFiles;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *toolbarFile;
    QStatusBar *statusBar;
    QToolBar *toolbarEdit;
    QToolBar *toolbarTools;

    void createActions(QMainWindow *MainWindow)
    {
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);

        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);

        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);

        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionSaveAs->setIcon(icon2);

        for(int i=0;i < MaxRecentFilesNum;i++)
        {
            actionRecentFiles[i] = new QAction (MainWindow);
            actionRecentFiles[i]->setVisible(false);
        }

        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));

        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);

        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);

        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);

        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon6);

        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon7);

        actionBackGround = new QAction(MainWindow);
        actionBackGround->setObjectName(QString::fromUtf8("actionBackGround"));

        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon8);

        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QString::fromUtf8("actionReplace"));

        actionRecalculate = new QAction(MainWindow);
        actionRecalculate->setObjectName(QString::fromUtf8("actionRecalculate"));

        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QString::fromUtf8("actionSort"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSort->setIcon(icon9);

        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));

        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));

        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));

        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon10);
    }

    void createMenu(QMainWindow *MainWindow)
    {
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        submenuRecentFiles = new QMenu(menuFile);
        submenuRecentFiles->setObjectName(QString::fromUtf8("submenuRecentFiles"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        /* File Menu */
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addMenu(submenuRecentFiles);
        for(int i=0;i<MaxRecentFilesNum;i++){
            submenuRecentFiles->addAction(actionRecentFiles[i]);
        }
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        /* Edit Menu */
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFont);
        menuEdit->addAction(actionBackGround);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionReplace);
        /* Tools Menu  */
        menuTools->addAction(actionRecalculate);
        menuTools->addAction(actionSort);
        menuTools->addSeparator();
        menuTools->addAction(actionOptions);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
    }

    void createToolBar(QMainWindow *MainWindow)
    {
        /*File toolbar*/
        toolbarFile = new QToolBar(MainWindow);
        toolbarFile->setObjectName(QString::fromUtf8("toolbarFile"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarFile);
        toolbarFile->addAction(actionNew);
        toolbarFile->addAction(actionOpen);
        toolbarFile->addAction(actionSave);

        /*Edit toolbar*/
        toolbarEdit = new QToolBar(MainWindow);
        toolbarEdit->setObjectName(QString::fromUtf8("toolbarEdit"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarEdit);
        toolbarEdit->addAction(actionCut);
        toolbarEdit->addAction(actionCopy);
        toolbarEdit->addAction(actionPaste);
        /*Tools toolbar*/
        toolbarTools = new QToolBar(MainWindow);
        toolbarTools->setObjectName(QString::fromUtf8("toolbarTools"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarTools);


    }

    void createStatusBar(QMainWindow *MainWindow)
    {
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        statusBar->setFont(font);
        MainWindow->setStatusBar(statusBar);
    }

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 425);

        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);

        createActions(MainWindow);
        createMenu(MainWindow);
        createToolBar(MainWindow);
        createStatusBar(MainWindow);
        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lattice", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
        actionFont->setText(QApplication::translate("MainWindow", "Font", 0, QApplication::UnicodeUTF8));
        actionBackGround->setText(QApplication::translate("MainWindow", "&BackGround", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBackGround->setToolTip(QApplication::translate("MainWindow", "BackGround", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFind->setText(QApplication::translate("MainWindow", "&Find", 0, QApplication::UnicodeUTF8));
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionReplace->setText(QApplication::translate("MainWindow", "&Replace", 0, QApplication::UnicodeUTF8));
        actionReplace->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionRecalculate->setText(QApplication::translate("MainWindow", "Re&calculate", 0, QApplication::UnicodeUTF8));
        actionSort->setText(QApplication::translate("MainWindow", "&Sort", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select &All", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        submenuRecentFiles->setTitle(QApplication::translate("MainWindow", "&RecentFiles", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        toolbarEdit->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolbarTools->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_Lattice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LATTICEUI_H
