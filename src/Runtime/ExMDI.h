#ifndef EXMDI_H
#define EXMDI_H

#include <QWidget>

namespace Ui {
class ExMDI;
}

class ExMDI : public QWidget
{
    Q_OBJECT

public:
    explicit ExMDI(QWidget *parent = nullptr);
    ~ExMDI();
    void loadFromFile(const QString& filename);
    bool isFileOpended();

    void setEditFont();
    void textCut();
    void textCopy();
    void textPaste();
private:
    Ui::ExMDI *ui;
    bool    m_fileOpened;   //true �򿪣�false δ��
    QString m_currentFile;
};

#endif // EXMDI_H
