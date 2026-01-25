#include <QWidget>

namespace Ui {
class historywindow;
}

class historywindow : public QWidget
{
    Q_OBJECT
public:
    explicit historywindow(QWidget *parent = nullptr);
    ~historywindow();

    void cargarClaves(const QStringList &claves);

private:
    Ui::historywindow *ui;
};
