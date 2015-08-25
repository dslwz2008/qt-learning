#include "DataZip.h"
#include "quazip/quazip.h"
#include "quazip/quazipfile.h"
#include "quazip/JlCompress.h"
#include <QMessageBox>
#include <QFileInfo>
#include <QDir>
#include <QFile>

DataZip::DataZip(void)
{
}

DataZip::~DataZip(void)
{
}

bool DataZip::extract(const QString & filePath, const QString & extDirPath, const QString & singleFileName/* = QString("")*/) 
{
	QStringList files = JlCompress::extractDir(filePath, extDirPath);
	int a;
	return true;
}

bool DataZip::archive(const QString & filePath, const QDir & dir, const QString & comment/* = QString("")*/) 
{
	return JlCompress::compressDir(filePath, dir.path(), true);

}
