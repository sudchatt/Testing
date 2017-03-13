/*
 * NativeService.cpp
 *
 *  Created on: Oct 4, 2013
 *      Author: sanjeev
 */

#include "NativeService.hpp"
#include <QDebug>


NativeService::NativeService() {

}

void NativeService::nativeServiceEntry(const QString &jsonString) {
	qDebug () << jsonString;
}


void emitJsFunctionNat (QString) {

}
