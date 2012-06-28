#ifndef BIBREFMAINWINDOW_H
#define BIBREFMAINWINDOW_H

#include <QMainWindow>
#include <QLocalSocket>

namespace Ui {
class BibrefMainWindow;
}

class BibrefMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BibrefMainWindow(QWidget *parent = 0);
    ~BibrefMainWindow();

public slots:
    void connect();
    
private:
    Ui::BibrefMainWindow *ui;
    QLocalSocket *m_socket;
};

#endif // BIBREFMAINWINDOW_H
