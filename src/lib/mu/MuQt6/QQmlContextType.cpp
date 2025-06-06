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
#include <MuQt6/QQmlContextType.h>
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
#include <MuQt6/QObjectType.h>
#include <MuQt6/QEventType.h>
#include <MuQt6/QQmlEngineType.h>
#include <MuQt6/QUrlType.h>
#include <MuQt6/QVariantType.h>
#include <MuQt6/QTimerEventType.h>

namespace Mu
{
    using namespace std;

    //----------------------------------------------------------------------
    //  INHERITABLE TYPE IMPLEMENTATION

    // destructor
    MuQt_QQmlContext::~MuQt_QQmlContext()
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

    MuQt_QQmlContext::MuQt_QQmlContext(Pointer muobj, const CallEnvironment* ce,
                                       QQmlEngine* engine, QObject* parent)
        : QQmlContext(engine, parent)
    {
        _env = ce;
        _obj = reinterpret_cast<ClassInstance*>(muobj);
        _obj->retainExternal();
        MuLangContext* c = (MuLangContext*)_env->context();
        _baseType = c->findSymbolOfTypeByQualifiedName<QQmlContextType>(
            c->internName("qt.QQmlContext"));
    }

    MuQt_QQmlContext::MuQt_QQmlContext(Pointer muobj, const CallEnvironment* ce,
                                       QQmlContext* parentContext,
                                       QObject* parent)
        : QQmlContext(parentContext, parent)
    {
        _env = ce;
        _obj = reinterpret_cast<ClassInstance*>(muobj);
        _obj->retainExternal();
        MuLangContext* c = (MuLangContext*)_env->context();
        _baseType = c->findSymbolOfTypeByQualifiedName<QQmlContextType>(
            c->internName("qt.QQmlContext"));
    }

    bool MuQt_QQmlContext::event(QEvent* e)
    {
        if (!_env)
            return QQmlContext::event(e);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[0];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(makeqpointer<QEventType>(c, e, "qt.QEvent"));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QQmlContext::event(e);
        }
    }

    bool MuQt_QQmlContext::eventFilter(QObject* watched, QEvent* event)
    {
        if (!_env)
            return QQmlContext::eventFilter(watched, event);
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[1];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(3);
            args[0] = Value(Pointer(_obj));
            args[1] =
                Value(makeinstance<QObjectType>(c, watched, "qt.QObject"));
            args[2] = Value(makeqpointer<QEventType>(c, event, "qt.QEvent"));
            Value rval = _env->call(F, args);
            return (bool)(rval._bool);
        }
        else
        {
            return QQmlContext::eventFilter(watched, event);
        }
    }

    void MuQt_QQmlContext::customEvent(QEvent* event)
    {
        if (!_env)
        {
            QQmlContext::customEvent(event);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[2];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(makeqpointer<QEventType>(c, event, "qt.QEvent"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QQmlContext::customEvent(event);
        }
    }

    void MuQt_QQmlContext::timerEvent(QTimerEvent* event)
    {
        if (!_env)
        {
            QQmlContext::timerEvent(event);
            return;
        }
        MuLangContext* c = (MuLangContext*)_env->context();
        const MemberFunction* F0 = _baseType->_func[3];
        const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
        if (F != F0)
        {
            Function::ArgumentVector args(2);
            args[0] = Value(Pointer(_obj));
            args[1] = Value(
                makeqpointer<QTimerEventType>(c, event, "qt.QTimerEvent"));
            Value rval = _env->call(F, args);
        }
        else
        {
            QQmlContext::timerEvent(event);
        }
    }

    //----------------------------------------------------------------------
    //  Mu Type CONSTRUCTORS

    QQmlContextType::QQmlContextType(Context* c, const char* name, Class* super,
                                     Class* super2)
        : Class(c, name, vectorOf2(super, super2))
    {
    }

    QQmlContextType::~QQmlContextType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    static Pointer QQmlContext_QQmlContext_QObject(Thread& NODE_THREAD,
                                                   Pointer obj)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

        if (!widget)
        {
            return 0;
        }
        else if (QQmlContext* w = object<QQmlContext>(widget))
        {
            QQmlContextType* type =
                c->findSymbolOfTypeByQualifiedName<QQmlContextType>(
                    c->internName("qt.QQmlContext"), false);
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
            QQmlContext_QQmlContext_QObject(NODE_THREAD, NODE_ARG(0, Pointer)));
    }

    Pointer
    qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlEngine_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_engine,
        Pointer param_parent)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlEngine* arg1 = object<QQmlEngine>(param_engine);
        QObject* arg2 = object<QObject>(param_parent);
        setobject(param_this, new MuQt_QQmlContext(
                                  param_this, NODE_THREAD.process()->callEnv(),
                                  arg1, arg2));
        return param_this;
    }

    Pointer
    qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this,
        Pointer param_parentContext, Pointer param_parent)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg1 = object<QQmlContext>(param_parentContext);
        QObject* arg2 = object<QObject>(param_parent);
        setobject(param_this, new MuQt_QQmlContext(
                                  param_this, NODE_THREAD.process()->callEnv(),
                                  arg1, arg2));
        return param_this;
    }

    Pointer qt_QQmlContext_baseUrl_QUrl_QQmlContext(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        return makeqtype<QUrlType>(c, arg0->baseUrl(), "qt.QUrl");
    }

    Pointer
    qt_QQmlContext_contextObject_QObject_QQmlContext(Mu::Thread& NODE_THREAD,
                                                     Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        return makeinstance<QObjectType>(c, arg0->contextObject(),
                                         "qt.QObject");
    }

    Pointer qt_QQmlContext_contextProperty_QVariant_QQmlContext_string(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QString arg1 = qstring(param_name);
        return makeqtype<QVariantType>(c, arg0->contextProperty(arg1),
                                       "qt.QVariant");
    }

    Pointer
    qt_QQmlContext_engine_QQmlEngine_QQmlContext(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        return makeinstance<QQmlEngineType>(c, arg0->engine(), "qt.QQmlEngine");
    }

    bool qt_QQmlContext_isValid_bool_QQmlContext(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        return arg0->isValid();
    }

    Pointer qt_QQmlContext_nameForObject_string_QQmlContext_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_object)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QObject* arg1 = object<QObject>(param_object);
        return makestring(c, arg0->nameForObject(arg1));
    }

    Pointer qt_QQmlContext_objectForName_QObject_QQmlContext_string(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_name)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QString arg1 = qstring(param_name);
        return makeinstance<QObjectType>(c, arg0->objectForName(arg1),
                                         "qt.QObject");
    }

    Pointer qt_QQmlContext_parentContext_QQmlContext_QQmlContext(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        return makeinstance<QQmlContextType>(c, arg0->parentContext(),
                                             "qt.QQmlContext");
    }

    Pointer qt_QQmlContext_resolvedUrl_QUrl_QQmlContext_QUrl(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_src)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QUrl arg1 = getqtype<QUrlType>(param_src);
        return makeqtype<QUrlType>(c, arg0->resolvedUrl(arg1), "qt.QUrl");
    }

    void qt_QQmlContext_setBaseUrl_void_QQmlContext_QUrl(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_baseUrl)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QUrl arg1 = getqtype<QUrlType>(param_baseUrl);
        arg0->setBaseUrl(arg1);
    }

    void qt_QQmlContext_setContextObject_void_QQmlContext_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_object)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        QObject* arg1 = object<QObject>(param_object);
        arg0->setContextObject(arg1);
    }

    void qt_QQmlContext_setContextProperty_void_QQmlContext_string_QObject(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_name,
        Pointer param_value)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QString arg1 = qstring(param_name);
        QObject* arg2 = object<QObject>(param_value);
        arg0->setContextProperty(arg1, arg2);
    }

    void qt_QQmlContext_setContextProperty_void_QQmlContext_string_QVariant(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_name,
        Pointer param_value)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        const QString arg1 = qstring(param_name);
        const QVariant arg2 = getqtype<QVariantType>(param_value);
        arg0->setContextProperty(arg1, arg2);
    }

    bool qt_QQmlContext_event_bool_QQmlContext_QEvent(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this,
                                                      Pointer param_e)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        QEvent* arg1 = getqpointer<QEventType>(param_e);
        return isMuQtObject(arg0) ? arg0->QQmlContext::event(arg1)
                                  : arg0->event(arg1);
    }

    bool qt_QQmlContext_eventFilter_bool_QQmlContext_QObject_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_watched,
        Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        QObject* arg1 = object<QObject>(param_watched);
        QEvent* arg2 = getqpointer<QEventType>(param_event);
        return isMuQtObject(arg0) ? arg0->QQmlContext::eventFilter(arg1, arg2)
                                  : arg0->eventFilter(arg1, arg2);
    }

    void qt_QQmlContext_customEvent_void_QQmlContext_QEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        QEvent* arg1 = getqpointer<QEventType>(param_event);
        if (isMuQtObject(arg0))
            ((MuQt_QQmlContext*)arg0)->customEvent_pub_parent(arg1);
        else
            ((MuQt_QQmlContext*)arg0)->customEvent_pub(arg1);
    }

    void qt_QQmlContext_timerEvent_void_QQmlContext_QTimerEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QQmlContext* arg0 = object<QQmlContext>(param_this);
        QTimerEvent* arg1 = getqpointer<QTimerEventType>(param_event);
        if (isMuQtObject(arg0))
            ((MuQt_QQmlContext*)arg0)->timerEvent_pub_parent(arg1);
        else
            ((MuQt_QQmlContext*)arg0)->timerEvent_pub(arg1);
    }

    static NODE_IMPLEMENTATION(_n_QQmlContext0, Pointer)
    {
        NODE_RETURN(
            qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlEngine_QObject(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QQmlContext1, Pointer)
    {
        NODE_RETURN(
            qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QObject(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_baseUrl0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_baseUrl_QUrl_QQmlContext(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_contextObject0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_contextObject_QObject_QQmlContext(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_contextProperty0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_contextProperty_QVariant_QQmlContext_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_engine0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_engine_QQmlEngine_QQmlContext(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isValid0, bool)
    {
        NODE_RETURN(qt_QQmlContext_isValid_bool_QQmlContext(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_nameForObject0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_nameForObject_string_QQmlContext_QObject(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_objectForName0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_objectForName_QObject_QQmlContext_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_parentContext0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_parentContext_QQmlContext_QQmlContext(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_resolvedUrl0, Pointer)
    {
        NODE_RETURN(qt_QQmlContext_resolvedUrl_QUrl_QQmlContext_QUrl(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setBaseUrl0, void)
    {
        qt_QQmlContext_setBaseUrl_void_QQmlContext_QUrl(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setContextObject0, void)
    {
        qt_QQmlContext_setContextObject_void_QQmlContext_QObject(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setContextProperty0, void)
    {
        qt_QQmlContext_setContextProperty_void_QQmlContext_string_QObject(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_setContextProperty1, void)
    {
        qt_QQmlContext_setContextProperty_void_QQmlContext_string_QVariant(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_event0, bool)
    {
        NODE_RETURN(qt_QQmlContext_event_bool_QQmlContext_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
    {
        NODE_RETURN(qt_QQmlContext_eventFilter_bool_QQmlContext_QObject_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_customEvent0, void)
    {
        qt_QQmlContext_customEvent_void_QQmlContext_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_timerEvent0, void)
    {
        qt_QQmlContext_timerEvent_void_QQmlContext_QTimerEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    void QQmlContextType::load()
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
                                QQmlContext_QQmlContext_QObject, Return, ftn,
                                Parameters,
                                new Param(c, "object", "qt.QObject"), End),

                   EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(
                c, "QQmlContext", _n_QQmlContext0, None, Compiled,
                qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlEngine_QObject,
                Return, "qt.QQmlContext", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "engine", "qt.QQmlEngine"),
                new Param(c, "parent", "qt.QObject"), End),
            new Function(
                c, "QQmlContext", _n_QQmlContext1, None, Compiled,
                qt_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QQmlContext_QObject,
                Return, "qt.QQmlContext", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "parentContext", "qt.QQmlContext"),
                new Param(c, "parent", "qt.QObject"), End),
            new Function(c, "baseUrl", _n_baseUrl0, None, Compiled,
                         qt_QQmlContext_baseUrl_QUrl_QQmlContext, Return,
                         "qt.QUrl", Parameters,
                         new Param(c, "this", "qt.QQmlContext"), End),
            new Function(c, "contextObject", _n_contextObject0, None, Compiled,
                         qt_QQmlContext_contextObject_QObject_QQmlContext,
                         Return, "qt.QObject", Parameters,
                         new Param(c, "this", "qt.QQmlContext"), End),
            new Function(
                c, "contextProperty", _n_contextProperty0, None, Compiled,
                qt_QQmlContext_contextProperty_QVariant_QQmlContext_string,
                Return, "qt.QVariant", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "name", "string"), End),
            new Function(c, "engine", _n_engine0, None, Compiled,
                         qt_QQmlContext_engine_QQmlEngine_QQmlContext, Return,
                         "qt.QQmlEngine", Parameters,
                         new Param(c, "this", "qt.QQmlContext"), End),
            new Function(c, "isValid", _n_isValid0, None, Compiled,
                         qt_QQmlContext_isValid_bool_QQmlContext, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QQmlContext"), End),
            new Function(
                c, "nameForObject", _n_nameForObject0, None, Compiled,
                qt_QQmlContext_nameForObject_string_QQmlContext_QObject, Return,
                "string", Parameters, new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "object", "qt.QObject"), End),
            new Function(
                c, "objectForName", _n_objectForName0, None, Compiled,
                qt_QQmlContext_objectForName_QObject_QQmlContext_string, Return,
                "qt.QObject", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "name", "string"), End),
            new Function(c, "parentContext", _n_parentContext0, None, Compiled,
                         qt_QQmlContext_parentContext_QQmlContext_QQmlContext,
                         Return, "qt.QQmlContext", Parameters,
                         new Param(c, "this", "qt.QQmlContext"), End),
            new Function(c, "resolvedUrl", _n_resolvedUrl0, None, Compiled,
                         qt_QQmlContext_resolvedUrl_QUrl_QQmlContext_QUrl,
                         Return, "qt.QUrl", Parameters,
                         new Param(c, "this", "qt.QQmlContext"),
                         new Param(c, "src", "qt.QUrl"), End),
            new Function(c, "setBaseUrl", _n_setBaseUrl0, None, Compiled,
                         qt_QQmlContext_setBaseUrl_void_QQmlContext_QUrl,
                         Return, "void", Parameters,
                         new Param(c, "this", "qt.QQmlContext"),
                         new Param(c, "baseUrl", "qt.QUrl"), End),
            new Function(
                c, "setContextObject", _n_setContextObject0, None, Compiled,
                qt_QQmlContext_setContextObject_void_QQmlContext_QObject,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "object", "qt.QObject"), End),
            new Function(
                c, "setContextProperty", _n_setContextProperty0, None, Compiled,
                qt_QQmlContext_setContextProperty_void_QQmlContext_string_QObject,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "name", "string"),
                new Param(c, "value", "qt.QObject"), End),
            new Function(
                c, "setContextProperty", _n_setContextProperty1, None, Compiled,
                qt_QQmlContext_setContextProperty_void_QQmlContext_string_QVariant,
                Return, "void", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "name", "string"),
                new Param(c, "value", "qt.QVariant"), End),
            _func[0] = new MemberFunction(
                c, "event", _n_event0, None, Compiled,
                qt_QQmlContext_event_bool_QQmlContext_QEvent, Return, "bool",
                Parameters, new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "e", "qt.QEvent"), End),
            _func[1] = new MemberFunction(
                c, "eventFilter", _n_eventFilter0, None, Compiled,
                qt_QQmlContext_eventFilter_bool_QQmlContext_QObject_QEvent,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "watched", "qt.QObject"),
                new Param(c, "event", "qt.QEvent"), End),
            // MISSING: metaObject ("const QMetaObject *"; QQmlContext this)
            // MISSING: childEvent (void; QQmlContext this, "QChildEvent *"
            // event) // protected MISSING: connectNotify (void; QQmlContext
            // this, "const QMetaMethod &" signal) // protected
            _func[2] = new MemberFunction(
                c, "customEvent", _n_customEvent0, None, Compiled,
                qt_QQmlContext_customEvent_void_QQmlContext_QEvent, Return,
                "void", Parameters, new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "event", "qt.QEvent"), End),
            // MISSING: disconnectNotify (void; QQmlContext this, "const
            // QMetaMethod &" signal) // protected
            _func[3] = new MemberFunction(
                c, "timerEvent", _n_timerEvent0, None, Compiled,
                qt_QQmlContext_timerEvent_void_QQmlContext_QTimerEvent, Return,
                "void", Parameters, new Param(c, "this", "qt.QQmlContext"),
                new Param(c, "event", "qt.QTimerEvent"), End),
            // static functions
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);

        const char** propExclusions = 0;

        populate(this, QQmlContext::staticMetaObject, propExclusions);
    }

} // namespace Mu
