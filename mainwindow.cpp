#include "mainwindow.h"
#include "latticeUI.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::connection()
{
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(newFile()));
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openFile()));
    connect(ui->actionSave,SIGNAL(triggered()),this,SLOT(save()));
    connect(ui->actionSaveAs,SIGNAL(triggered()),this,SLOT(saveAs()));
    for(int i=0;i < ui->MaxRecentFilesNum;i++)
    {
        connect(ui->actionRecentFiles[i],SIGNAL(triggered()),this,SLOT(openRecentFile()));
    }
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(exit());
    connect(ui->actionCut,SIGNAL(triggered()),this,SLOT(cut()));
    connect(ui->actionCopy,SIGNAL(triggered()),this,SLOT(copy()));
    connect(ui->actionPaste,SIGNAL(triggered()),this,SLOT(paste()));
    connect(ui->actionFont,SIGNAL(triggered()),this,SLOT(setCellFont()));
    connect(ui->actionBackGround,SIGNAL(triggered()),this,SLOT(setCellBackGround()));
    connect(ui->actionFind,SIGNAL(triggered()),this,SLOT(find()));
    connect(ui->actionReplace,SIGNAL(triggered()),this,SLOT(replace()));
    connect(ui->actionDelete,SIGNAL(triggered()),this,SLOT(deleteCell()));
    connect(ui->actionSort,SIGNAL(triggered()),this,SLOT(sort()));
    connect(ui->actionSelectAll,SIGNAL(triggered()),this,SLOT(save()));
}
