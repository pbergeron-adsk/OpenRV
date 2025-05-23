//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#include <MuQt6/qtUtils.h>
#include <MuQt6/QUdpSocketType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>
#include <MuQt6/QWidgetType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt6/QHostAddressType.h>
#include <MuQt6/QVariantType.h>

namespace Mu
{
    using namespace std;

    //----------------------------------------------------------------------
    //  INHERITABLE TYPE IMPLEMENTATION

    // destructor
    MuQt_QUdpSocket::~MuQt_QUdpSocket()
    {
        if (_obj)
        {
            *_obj->data<Pointer>() = Pointer(0);
            _obj->releaseExternal();
        }
        _obj = 0;
        _env = 0;
        _baseType = 0;
    }

    MuQt_QUdpSocket::MuQt_QUdpSocket(Pointer muobj, const CallEnvironment* ce,
                                     QObject* parent)
        : QUdpSocket(parent)
    {
        _env = ce;
        _obj = reinterpret_cast<ClassInstance*>(muobj);
        _obj->retainExternal();
        MuLangContext* c = (MuLangContext*)_env->context();
        _baseType = c->findSymbolOfTypeByQualifiedName<QUdpSocketType>(
            c->internName("qt.QUdpSocket"));
    }

    void MuQt_QUdpSocket::disconnectFromHost()
    {
        if (!_env)
        {
            QUdpSocket::disconnectFromHost();
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[0];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
        }
        else
        {
            QUdpSocket::disconnectFromHost();
        }
    }

    void MuQt_QUdpSocket::resume()
    {
        if (!_env)
        {
            QUdpSocket::resume();
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[1];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
        }
        else
        {
            QUdpSocket::resume();
        }
    }

    void MuQt_QUdpSocket::setReadBufferSize(qint64 size)
    {
        if (!_env)
        {
            QUdpSocket::setReadBufferSize(size);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[2];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(size);
            Value rval = _env->call(F, args);
        }
        else
        {
            QUdpSocket::setReadBufferSize(size);
        }
    }

    void MuQt_QUdpSocket::setSocketOption(QAbstractSocket::SocketOption option,
                                          const QVariant& value)
    {
        if (!_env)
        {
            QUdpSocket::setSocketOption(option, value);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[3];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(3);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(int(option));
            args[2] = Value(makeqtype<QVariantType>(c, value, "qt.QVariant"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QUdpSocket::setSocketOption(option, value);
        }
    }

    QVariant MuQt_QUdpSocket::socketOption(QAbstractSocket::SocketOption option)
    {
        if (!_env)
            return QUdpSocket::socketOption(option);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[4];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(int(option));
            Value rval = _env->call(F, args);
            return getqtype<QVariantType>(rval._Pointer);
        }
        else
        {
            return QUdpSocket::socketOption(option);
        }
    }

    bool MuQt_QUdpSocket::waitForConnected(int msecs)
    {
        if (!_env)
            return QUdpSocket::waitForConnected(msecs);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[5];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(msecs);
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QUdpSocket::waitForConnected(msecs);
        }
    }

    bool MuQt_QUdpSocket::waitForDisconnected(int msecs)
    {
        if (!_env)
            return QUdpSocket::waitForDisconnected(msecs);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[6];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(msecs);
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QUdpSocket::waitForDisconnected(msecs);
        }
    }

    qint64 MuQt_QUdpSocket::bytesAvailable() const
    {
        if (!_env)
            return QUdpSocket::bytesAvailable();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[7];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (int64)(rval._int64);
        }
        else
        {
            return QUdpSocket::bytesAvailable();
        }
    }

    qint64 MuQt_QUdpSocket::bytesToWrite() const
    {
        if (!_env)
            return QUdpSocket::bytesToWrite();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[8];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (int64)(rval._int64);
        }
        else
        {
            return QUdpSocket::bytesToWrite();
        }
    }

    void MuQt_QUdpSocket::close()
    {
        if (!_env)
        {
            QUdpSocket::close();
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[9];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
        }
        else
        {
            QUdpSocket::close();
        }
    }

    bool MuQt_QUdpSocket::isSequential() const
    {
        if (!_env)
            return QUdpSocket::isSequential();
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[10];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(1);
            args[0] = Value(Pointer(_obj));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QUdpSocket::isSequential();
        }
    }

    bool MuQt_QUdpSocket::waitForBytesWritten(int msecs)
    {
        if (!_env)
            return QUdpSocket::waitForBytesWritten(msecs);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[11];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(msecs);
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QUdpSocket::waitForBytesWritten(msecs);
        }
    }

    bool MuQt_QUdpSocket::waitForReadyRead(int msecs)
    {
        if (!_env)
            return QUdpSocket::waitForReadyRead(msecs);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[12];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(msecs);
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QUdpSocket::waitForReadyRead(msecs);
        }
    }

    qint64 MuQt_QUdpSocket::skipData(qint64 maxSize)
    {
        if (!_env)
            return QUdpSocket::skipData(maxSize);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[13];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(maxSize);
            Value rval = _env->call(F, args);
            return (int64)(rval._int64);
        }
        else
        {
            return QUdpSocket::skipData(maxSize);
        }
    }

    //----------------------------------------------------------------------
    //  Mu Type CONSTRUCTORS

    QUdpSocketType::QUdpSocketType(Context* c, const char* name, Class* super,
                                   Class* super2)
        : Class(c, name, vectorOf2(super, super2))
    {
    }

    QUdpSocketType::~QUdpSocketType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    static Pointer QUdpSocket_QUdpSocket_QObject(Thread& NODE_THREAD,
                                                 Pointer obj)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

        if (!widget)
        {
            return 0;
        }
        else if (QUdpSocket* w = object<QUdpSocket>(widget))
        {
            QUdpSocketType* type =
                c->findSymbolOfTypeByQualifiedName<QUdpSocketType>(
                    c->internName("qt.QUdpSocket"), false);
            ClassInstance* o = ClassInstance::allocate(type);
            setobject(o, w);
            return o;
        }
        else
        {
            throw BadCastException();
        }
    }

    static NODE_IMPLEMENTATION(castFromObject, Pointer)
    {
        NODE_RETURN(
            QUdpSocket_QUdpSocket_QObject(NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    Pointer qt_QUdpSocket_QUdpSocket_QUdpSocket_QUdpSocket_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QObject* arg1 = object<QObject>(param_parent);
        setobject(param_this,
                  new MuQt_QUdpSocket(param_this,
                                      NODE_THREAD.process()->callEnv(), arg1));
        return param_this;
    }

    bool
    qt_QUdpSocket_hasPendingDatagrams_bool_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        return arg0->hasPendingDatagrams();
    }

    bool qt_QUdpSocket_joinMulticastGroup_bool_QUdpSocket_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_groupAddress)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        const QHostAddress arg1 =
            getqtype<QHostAddressType>(param_groupAddress);
        return arg0->joinMulticastGroup(arg1);
    }

    bool qt_QUdpSocket_leaveMulticastGroup_bool_QUdpSocket_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_groupAddress)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        const QHostAddress arg1 =
            getqtype<QHostAddressType>(param_groupAddress);
        return arg0->leaveMulticastGroup(arg1);
    }

    int64
    qt_QUdpSocket_pendingDatagramSize_int64_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        return arg0->pendingDatagramSize();
    }

    void
    qt_QUdpSocket_disconnectFromHost_void_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                     Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        if (isMuQtObject(arg0))
            arg0->QUdpSocket::disconnectFromHost();
        else
            arg0->disconnectFromHost();
    }

    void qt_QUdpSocket_resume_void_QUdpSocket(Mu::Thread& NODE_THREAD,
                                              Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        if (isMuQtObject(arg0))
            arg0->QUdpSocket::resume();
        else
            arg0->resume();
    }

    void qt_QUdpSocket_setReadBufferSize_void_QUdpSocket_int64(
        Mu::Thread& NODE_THREAD, Pointer param_this, int64 param_size)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        qint64 arg1 = (int64)(param_size);
        if (isMuQtObject(arg0))
            arg0->QUdpSocket::setReadBufferSize(arg1);
        else
            arg0->setReadBufferSize(arg1);
    }

    void qt_QUdpSocket_setSocketOption_void_QUdpSocket_int_QVariant(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_option,
        Pointer param_value)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        QAbstractSocket::SocketOption arg1 =
            (QAbstractSocket::SocketOption)(param_option);
        const QVariant arg2 = getqtype<QVariantType>(param_value);
        if (isMuQtObject(arg0))
            arg0->QUdpSocket::setSocketOption(arg1, arg2);
        else
            arg0->setSocketOption(arg1, arg2);
    }

    Pointer qt_QUdpSocket_socketOption_QVariant_QUdpSocket_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_option)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        QAbstractSocket::SocketOption arg1 =
            (QAbstractSocket::SocketOption)(param_option);
        return isMuQtObject(arg0)
                   ? makeqtype<QVariantType>(
                         c, arg0->QUdpSocket::socketOption(arg1), "qt.QVariant")
                   : makeqtype<QVariantType>(c, arg0->socketOption(arg1),
                                             "qt.QVariant");
    }

    bool qt_QUdpSocket_waitForConnected_bool_QUdpSocket_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        int arg1 = (int)(param_msecs);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::waitForConnected(arg1)
                                  : arg0->waitForConnected(arg1);
    }

    bool qt_QUdpSocket_waitForDisconnected_bool_QUdpSocket_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        int arg1 = (int)(param_msecs);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::waitForDisconnected(arg1)
                                  : arg0->waitForDisconnected(arg1);
    }

    int64 qt_QUdpSocket_bytesAvailable_int64_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                        Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::bytesAvailable()
                                  : arg0->bytesAvailable();
    }

    int64 qt_QUdpSocket_bytesToWrite_int64_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::bytesToWrite()
                                  : arg0->bytesToWrite();
    }

    void qt_QUdpSocket_close_void_QUdpSocket(Mu::Thread& NODE_THREAD,
                                             Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        if (isMuQtObject(arg0))
            arg0->QUdpSocket::close();
        else
            arg0->close();
    }

    bool qt_QUdpSocket_isSequential_bool_QUdpSocket(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::isSequential()
                                  : arg0->isSequential();
    }

    bool qt_QUdpSocket_waitForBytesWritten_bool_QUdpSocket_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        int arg1 = (int)(param_msecs);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::waitForBytesWritten(arg1)
                                  : arg0->waitForBytesWritten(arg1);
    }

    bool qt_QUdpSocket_waitForReadyRead_bool_QUdpSocket_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_msecs)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        int arg1 = (int)(param_msecs);
        return isMuQtObject(arg0) ? arg0->QUdpSocket::waitForReadyRead(arg1)
                                  : arg0->waitForReadyRead(arg1);
    }

    int64 qt_QUdpSocket_skipData_int64_QUdpSocket_int64(Mu::Thread& NODE_THREAD,
                                                        Pointer param_this,
                                                        int64 param_maxSize)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QUdpSocket* arg0 = object<QUdpSocket>(param_this);
        qint64 arg1 = (int64)(param_maxSize);
        return isMuQtObject(arg0)
                   ? ((MuQt_QUdpSocket*)arg0)->skipData_pub_parent(arg1)
                   : ((MuQt_QUdpSocket*)arg0)->skipData_pub(arg1);
    }

    static NODE_IMPLEMENTATION(_n_QUdpSocket0, Pointer)
    {
        NODE_RETURN(qt_QUdpSocket_QUdpSocket_QUdpSocket_QUdpSocket_QObject(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_hasPendingDatagrams0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_hasPendingDatagrams_bool_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_joinMulticastGroup0, bool)
    {
        NODE_RETURN(
            qt_QUdpSocket_joinMulticastGroup_bool_QUdpSocket_QHostAddress(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_leaveMulticastGroup0, bool)
    {
        NODE_RETURN(
            qt_QUdpSocket_leaveMulticastGroup_bool_QUdpSocket_QHostAddress(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_pendingDatagramSize0, int64)
    {
        NODE_RETURN(qt_QUdpSocket_pendingDatagramSize_int64_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_disconnectFromHost0, void)
    {
        qt_QUdpSocket_disconnectFromHost_void_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_resume0, void)
    {
        qt_QUdpSocket_resume_void_QUdpSocket(NODE_THREAD,
                                             NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setReadBufferSize0, void)
    {
        qt_QUdpSocket_setReadBufferSize_void_QUdpSocket_int64(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int64));
    }

    static NODE_IMPLEMENTATION(_n_setSocketOption0, void)
    {
        qt_QUdpSocket_setSocketOption_void_QUdpSocket_int_QVariant(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
            NODE_ARG(2, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_socketOption0, Pointer)
    {
        NODE_RETURN(qt_QUdpSocket_socketOption_QVariant_QUdpSocket_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_waitForConnected0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_waitForConnected_bool_QUdpSocket_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_waitForDisconnected0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_waitForDisconnected_bool_QUdpSocket_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_bytesAvailable0, int64)
    {
        NODE_RETURN(qt_QUdpSocket_bytesAvailable_int64_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_bytesToWrite0, int64)
    {
        NODE_RETURN(qt_QUdpSocket_bytesToWrite_int64_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_close0, void)
    {
        qt_QUdpSocket_close_void_QUdpSocket(NODE_THREAD,
                                            NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_isSequential0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_isSequential_bool_QUdpSocket(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_waitForBytesWritten0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_waitForBytesWritten_bool_QUdpSocket_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_waitForReadyRead0, bool)
    {
        NODE_RETURN(qt_QUdpSocket_waitForReadyRead_bool_QUdpSocket_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_skipData0, int64)
    {
        NODE_RETURN(qt_QUdpSocket_skipData_int64_QUdpSocket_int64(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int64)));
    }

    void QUdpSocketType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate,
                                None, Return, ftn, End),

                   new Function(c, tn, castFromObject, Cast, Compiled,
                                QUdpSocket_QUdpSocket_QObject, Return, ftn,
                                Parameters,
                                new Param(c, "object", "qt.QObject"), End),

                   EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QUdpSocket", _n_QUdpSocket0, None, Compiled,
                         qt_QUdpSocket_QUdpSocket_QUdpSocket_QUdpSocket_QObject,
                         Return, "qt.QUdpSocket", Parameters,
                         new Param(c, "this", "qt.QUdpSocket"),
                         new Param(c, "parent", "qt.QObject"), End),
            new Function(c, "hasPendingDatagrams", _n_hasPendingDatagrams0,
                         None, Compiled,
                         qt_QUdpSocket_hasPendingDatagrams_bool_QUdpSocket,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QUdpSocket"), End),
            new Function(
                c, "joinMulticastGroup", _n_joinMulticastGroup0, None, Compiled,
                qt_QUdpSocket_joinMulticastGroup_bool_QUdpSocket_QHostAddress,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "groupAddress", "qt.QHostAddress"), End),
            // MISSING: joinMulticastGroup (bool; QUdpSocket this, QHostAddress
            // groupAddress, "const QNetworkInterface &" iface)
            new Function(
                c, "leaveMulticastGroup", _n_leaveMulticastGroup0, None,
                Compiled,
                qt_QUdpSocket_leaveMulticastGroup_bool_QUdpSocket_QHostAddress,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "groupAddress", "qt.QHostAddress"), End),
            // MISSING: leaveMulticastGroup (bool; QUdpSocket this, QHostAddress
            // groupAddress, "const QNetworkInterface &" iface) MISSING:
            // multicastInterface ("QNetworkInterface"; QUdpSocket this)
            new Function(c, "pendingDatagramSize", _n_pendingDatagramSize0,
                         None, Compiled,
                         qt_QUdpSocket_pendingDatagramSize_int64_QUdpSocket,
                         Return, "int64", Parameters,
                         new Param(c, "this", "qt.QUdpSocket"), End),
            // MISSING: readDatagram (int64; QUdpSocket this, "char *" data,
            // int64 maxSize, QHostAddress address, "quint16 *" port) MISSING:
            // receiveDatagram ("QNetworkDatagram"; QUdpSocket this, int64
            // maxSize) MISSING: setMulticastInterface (void; QUdpSocket this,
            // "const QNetworkInterface &" iface) MISSING: writeDatagram (int64;
            // QUdpSocket this, "const char *" data, int64 size, QHostAddress
            // address, "quint16" port) MISSING: writeDatagram (int64;
            // QUdpSocket this, "const QNetworkDatagram &" datagram) MISSING:
            // writeDatagram (int64; QUdpSocket this, QByteArray datagram,
            // QHostAddress host, "quint16" port) MISSING: bind (bool;
            // QUdpSocket this, QHostAddress address, "quint16" port, flags
            // QAbstractSocket::BindMode mode) MISSING: connectToHost (void;
            // QUdpSocket this, string hostName, "quint16" port, flags
            // QIODeviceBase::OpenMode openMode, flags
            // QAbstractSocket::NetworkLayerProtocol protocol)
            _func[0] = new MemberFunction(
                c, "disconnectFromHost", _n_disconnectFromHost0, None, Compiled,
                qt_QUdpSocket_disconnectFromHost_void_QUdpSocket, Return,
                "void", Parameters, new Param(c, "this", "qt.QUdpSocket"), End),
            _func[1] = new MemberFunction(
                c, "resume", _n_resume0, None, Compiled,
                qt_QUdpSocket_resume_void_QUdpSocket, Return, "void",
                Parameters, new Param(c, "this", "qt.QUdpSocket"), End),
            _func[2] = new MemberFunction(
                c, "setReadBufferSize", _n_setReadBufferSize0, None, Compiled,
                qt_QUdpSocket_setReadBufferSize_void_QUdpSocket_int64, Return,
                "void", Parameters, new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "size", "int64"), End),
            // MISSING: setSocketDescriptor (bool; QUdpSocket this, "qintptr"
            // socketDescriptor, flags QAbstractSocket::SocketState socketState,
            // flags QIODeviceBase::OpenMode openMode)
            _func[3] = new MemberFunction(
                c, "setSocketOption", _n_setSocketOption0, None, Compiled,
                qt_QUdpSocket_setSocketOption_void_QUdpSocket_int_QVariant,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "option", "int"),
                new Param(c, "value", "qt.QVariant"), End),
            // MISSING: socketDescriptor ("qintptr"; QUdpSocket this)
            _func[4] = new MemberFunction(
                c, "socketOption", _n_socketOption0, None, Compiled,
                qt_QUdpSocket_socketOption_QVariant_QUdpSocket_int, Return,
                "qt.QVariant", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "option", "int"), End),
            _func[5] = new MemberFunction(
                c, "waitForConnected", _n_waitForConnected0, None, Compiled,
                qt_QUdpSocket_waitForConnected_bool_QUdpSocket_int, Return,
                "bool", Parameters, new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "msecs", "int", Value((int)30000)), End),
            _func[6] = new MemberFunction(
                c, "waitForDisconnected", _n_waitForDisconnected0, None,
                Compiled, qt_QUdpSocket_waitForDisconnected_bool_QUdpSocket_int,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "msecs", "int", Value((int)30000)), End),
            _func[7] = new MemberFunction(
                c, "bytesAvailable", _n_bytesAvailable0, None, Compiled,
                qt_QUdpSocket_bytesAvailable_int64_QUdpSocket, Return, "int64",
                Parameters, new Param(c, "this", "qt.QUdpSocket"), End),
            _func[8] = new MemberFunction(
                c, "bytesToWrite", _n_bytesToWrite0, None, Compiled,
                qt_QUdpSocket_bytesToWrite_int64_QUdpSocket, Return, "int64",
                Parameters, new Param(c, "this", "qt.QUdpSocket"), End),
            _func[9] = new MemberFunction(
                c, "close", _n_close0, None, Compiled,
                qt_QUdpSocket_close_void_QUdpSocket, Return, "void", Parameters,
                new Param(c, "this", "qt.QUdpSocket"), End),
            _func[10] = new MemberFunction(
                c, "isSequential", _n_isSequential0, None, Compiled,
                qt_QUdpSocket_isSequential_bool_QUdpSocket, Return, "bool",
                Parameters, new Param(c, "this", "qt.QUdpSocket"), End),
            _func[11] = new MemberFunction(
                c, "waitForBytesWritten", _n_waitForBytesWritten0, None,
                Compiled, qt_QUdpSocket_waitForBytesWritten_bool_QUdpSocket_int,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "msecs", "int", Value((int)30000)), End),
            _func[12] = new MemberFunction(
                c, "waitForReadyRead", _n_waitForReadyRead0, None, Compiled,
                qt_QUdpSocket_waitForReadyRead_bool_QUdpSocket_int, Return,
                "bool", Parameters, new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "msecs", "int", Value((int)30000)), End),
            // MISSING: readData (int64; QUdpSocket this, "char *" data, int64
            // maxSize) // protected MISSING: readLineData (int64; QUdpSocket
            // this, "char *" data, int64 maxlen) // protected
            _func[13] = new MemberFunction(
                c, "skipData", _n_skipData0, None, Compiled,
                qt_QUdpSocket_skipData_int64_QUdpSocket_int64, Return, "int64",
                Parameters, new Param(c, "this", "qt.QUdpSocket"),
                new Param(c, "maxSize", "int64"), End),
            // MISSING: writeData (int64; QUdpSocket this, "const char *" data,
            // int64 size) // protected static functions
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);

        const char** propExclusions = 0;

        populate(this, QUdpSocket::staticMetaObject, propExclusions);
    }

} // namespace Mu
