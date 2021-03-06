#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE

#include <QObject>
#include <QCheckBox>
#include <QDateEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QGroupBox>
#include <QFormLayout>
#include <QCheckBox>
#include <QApplication>
#include <QWidget>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QDialog>
#include <QMessageBox>

class FenPrincipale : public QWidget
{

    Q_OBJECT
    public:
        FenPrincipale();

    private slots:
        void genererCode();

    private:
        QLineEdit *nom;
        QLineEdit *classeMere;
        QCheckBox *protections;
        QCheckBox *genererConstructeur;
        QCheckBox *genererDestructeur;
        QGroupBox *groupCommentaires;
        QLineEdit *auteur;
        QDateEdit *date;
        QTextEdit *role;
        QPushButton *generer;
        QPushButton *quitter;

};

#endif
