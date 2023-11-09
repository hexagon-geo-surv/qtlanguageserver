// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial

#ifndef QTJSONRPCGLOBAL_H
#define QTJSONRPCGLOBAL_H

#include <QtCore/qglobal.h>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_JSONRPC_LIB)
#        define Q_JSONRPC_EXPORT Q_DECL_EXPORT
#    else
#        define Q_JSONRPC_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_JSONRPC_EXPORT
#endif

QT_END_NAMESPACE

#endif // QTJSONRPCGLOBAL_H
