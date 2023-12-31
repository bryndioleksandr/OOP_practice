#ifndef SHOWDOC_H
#define SHOWDOC_H

#include <QDialog>
#include <QListWidget>
#include "createdoc.h"
#include "sqlitedbmanager.h"

namespace Ui {
class ShowDoc;
}

class ShowDoc : public QDialog
{
    Q_OBJECT

public:
    explicit ShowDoc(QWidget *parent = nullptr);
    void setList();
    ~ShowDoc();

private:
    Ui::ShowDoc *ui;
    bool checkFields();
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // SHOWDOC_H
