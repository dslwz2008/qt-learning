//////////////////////////////////////////////////////////////////////////
#ifndef DATAZIP_H
#define DATAZIP_H

class QString;
class QStringList;
class QDir;

class DataZip
{
public:
	DataZip(void);
	~DataZip(void);
	static bool extract(const QString & filePath, const QString & extDirPath, const QString & singleFileName);
	static bool archive(const QString & filePath, const QDir & dir, const QString & comment);
	static void recurseAddDir(QDir d, QStringList & list);

};

#endif
