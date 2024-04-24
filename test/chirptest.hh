#ifndef CHIRPTEST_HH
#define CHIRPTEST_HH

#include <QObject>

class ChirpTest : public QObject
{
  Q_OBJECT

public:
  explicit ChirpTest(QObject *parent = nullptr);

private slots:
  void testReaderBasic();
  void testReaderCTCSS();
  void testReaderDCS();
  void testReaderCross();

  void testWriterBasic();
  void testWriterCTCSS();
  void testWriterDCS();
  void testWriterCross();
};

#endif // CHIRPTEST_HH
