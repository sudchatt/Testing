/*
 * NativeService.hpp
 *
 *  Created on: Oct 4, 2013
 *      Author: sanjeev
 */

#ifndef NATIVESERVICE_HPP_
#define NATIVESERVICE_HPP_

#include <QObject>
#include <QString>

namespace bb { namespace cascades { class Application; } }

class NativeService : public QObject
{
	Q_OBJECT
public:
	NativeService();
	virtual ~NativeService () {};
	void nativeServiceEntry (const QString &jsonString);
signals:
	void emitJsFunctionNat(QString);
};


#endif /* NATIVESERVICE_HPP_ */
