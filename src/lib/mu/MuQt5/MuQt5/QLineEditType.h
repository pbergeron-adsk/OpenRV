//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QLineEditType__h__
#define __MuQt5__QLineEditType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{
    class MuQt_QLineEdit;

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QLineEditType : public Class
    {
    public:
        typedef MuQt_QLineEdit MuQtType;
        typedef QLineEdit QtType;

        //
        //  Constructors
        //

        QLineEditType(Context* context, const char* name, Class* superClass = 0,
                      Class* superClass2 = 0);

        virtual ~QLineEditType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[32];
    };

    // Inheritable object

    class MuQt_QLineEdit : public QLineEdit
    {
    public:
        virtual ~MuQt_QLineEdit();
        MuQt_QLineEdit(Pointer muobj, const CallEnvironment*, QWidget* parent);
        MuQt_QLineEdit(Pointer muobj, const CallEnvironment*,
                       const QString& contents, QWidget* parent);
        virtual bool event(QEvent* e);
        virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const;
        virtual QSize minimumSizeHint() const;
        virtual QSize sizeHint() const;

    protected:
        virtual void changeEvent(QEvent* ev);
        virtual void contextMenuEvent(QContextMenuEvent* event);
        virtual void dragEnterEvent(QDragEnterEvent* e);
        virtual void dragLeaveEvent(QDragLeaveEvent* e);
        virtual void dragMoveEvent(QDragMoveEvent* e);
        virtual void dropEvent(QDropEvent* e);
        virtual void focusInEvent(QFocusEvent* e);
        virtual void focusOutEvent(QFocusEvent* e);
        virtual void keyPressEvent(QKeyEvent* event);
        virtual void mouseDoubleClickEvent(QMouseEvent* e);
        virtual void mouseMoveEvent(QMouseEvent* e);
        virtual void mousePressEvent(QMouseEvent* e);
        virtual void mouseReleaseEvent(QMouseEvent* e);
        virtual void paintEvent(QPaintEvent* _p14);

    public:
        virtual bool hasHeightForWidth() const;
        virtual int heightForWidth(int w) const;

    protected:
        virtual void closeEvent(QCloseEvent* event);
        virtual void enterEvent(QEvent* event);
        virtual bool focusNextPrevChild(bool next);
        virtual void hideEvent(QHideEvent* event);
        virtual void keyReleaseEvent(QKeyEvent* event);
        virtual void leaveEvent(QEvent* event);
        virtual void moveEvent(QMoveEvent* event);
        virtual void resizeEvent(QResizeEvent* event);
        virtual void showEvent(QShowEvent* event);
        virtual void tabletEvent(QTabletEvent* event);
        virtual void wheelEvent(QWheelEvent* event);
        virtual int metric(PaintDeviceMetric m) const;

    public:
        QRect cursorRect_pub() const { return cursorRect(); }

        QRect cursorRect_pub_parent() const { return QLineEdit::cursorRect(); }

        void changeEvent_pub(QEvent* ev) { changeEvent(ev); }

        void changeEvent_pub_parent(QEvent* ev) { QLineEdit::changeEvent(ev); }

        void contextMenuEvent_pub(QContextMenuEvent* event)
        {
            contextMenuEvent(event);
        }

        void contextMenuEvent_pub_parent(QContextMenuEvent* event)
        {
            QLineEdit::contextMenuEvent(event);
        }

        void dragEnterEvent_pub(QDragEnterEvent* e) { dragEnterEvent(e); }

        void dragEnterEvent_pub_parent(QDragEnterEvent* e)
        {
            QLineEdit::dragEnterEvent(e);
        }

        void dragLeaveEvent_pub(QDragLeaveEvent* e) { dragLeaveEvent(e); }

        void dragLeaveEvent_pub_parent(QDragLeaveEvent* e)
        {
            QLineEdit::dragLeaveEvent(e);
        }

        void dragMoveEvent_pub(QDragMoveEvent* e) { dragMoveEvent(e); }

        void dragMoveEvent_pub_parent(QDragMoveEvent* e)
        {
            QLineEdit::dragMoveEvent(e);
        }

        void dropEvent_pub(QDropEvent* e) { dropEvent(e); }

        void dropEvent_pub_parent(QDropEvent* e) { QLineEdit::dropEvent(e); }

        void focusInEvent_pub(QFocusEvent* e) { focusInEvent(e); }

        void focusInEvent_pub_parent(QFocusEvent* e)
        {
            QLineEdit::focusInEvent(e);
        }

        void focusOutEvent_pub(QFocusEvent* e) { focusOutEvent(e); }

        void focusOutEvent_pub_parent(QFocusEvent* e)
        {
            QLineEdit::focusOutEvent(e);
        }

        void keyPressEvent_pub(QKeyEvent* event) { keyPressEvent(event); }

        void keyPressEvent_pub_parent(QKeyEvent* event)
        {
            QLineEdit::keyPressEvent(event);
        }

        void mouseDoubleClickEvent_pub(QMouseEvent* e)
        {
            mouseDoubleClickEvent(e);
        }

        void mouseDoubleClickEvent_pub_parent(QMouseEvent* e)
        {
            QLineEdit::mouseDoubleClickEvent(e);
        }

        void mouseMoveEvent_pub(QMouseEvent* e) { mouseMoveEvent(e); }

        void mouseMoveEvent_pub_parent(QMouseEvent* e)
        {
            QLineEdit::mouseMoveEvent(e);
        }

        void mousePressEvent_pub(QMouseEvent* e) { mousePressEvent(e); }

        void mousePressEvent_pub_parent(QMouseEvent* e)
        {
            QLineEdit::mousePressEvent(e);
        }

        void mouseReleaseEvent_pub(QMouseEvent* e) { mouseReleaseEvent(e); }

        void mouseReleaseEvent_pub_parent(QMouseEvent* e)
        {
            QLineEdit::mouseReleaseEvent(e);
        }

        void paintEvent_pub(QPaintEvent* _p14) { paintEvent(_p14); }

        void paintEvent_pub_parent(QPaintEvent* _p14)
        {
            QLineEdit::paintEvent(_p14);
        }

        void closeEvent_pub(QCloseEvent* event) { closeEvent(event); }

        void closeEvent_pub_parent(QCloseEvent* event)
        {
            QLineEdit::closeEvent(event);
        }

        void enterEvent_pub(QEvent* event) { enterEvent(event); }

        void enterEvent_pub_parent(QEvent* event)
        {
            QLineEdit::enterEvent(event);
        }

        bool focusNextPrevChild_pub(bool next)
        {
            return focusNextPrevChild(next);
        }

        bool focusNextPrevChild_pub_parent(bool next)
        {
            return QLineEdit::focusNextPrevChild(next);
        }

        void hideEvent_pub(QHideEvent* event) { hideEvent(event); }

        void hideEvent_pub_parent(QHideEvent* event)
        {
            QLineEdit::hideEvent(event);
        }

        void keyReleaseEvent_pub(QKeyEvent* event) { keyReleaseEvent(event); }

        void keyReleaseEvent_pub_parent(QKeyEvent* event)
        {
            QLineEdit::keyReleaseEvent(event);
        }

        void leaveEvent_pub(QEvent* event) { leaveEvent(event); }

        void leaveEvent_pub_parent(QEvent* event)
        {
            QLineEdit::leaveEvent(event);
        }

        void moveEvent_pub(QMoveEvent* event) { moveEvent(event); }

        void moveEvent_pub_parent(QMoveEvent* event)
        {
            QLineEdit::moveEvent(event);
        }

        void resizeEvent_pub(QResizeEvent* event) { resizeEvent(event); }

        void resizeEvent_pub_parent(QResizeEvent* event)
        {
            QLineEdit::resizeEvent(event);
        }

        void showEvent_pub(QShowEvent* event) { showEvent(event); }

        void showEvent_pub_parent(QShowEvent* event)
        {
            QLineEdit::showEvent(event);
        }

        void tabletEvent_pub(QTabletEvent* event) { tabletEvent(event); }

        void tabletEvent_pub_parent(QTabletEvent* event)
        {
            QLineEdit::tabletEvent(event);
        }

        void wheelEvent_pub(QWheelEvent* event) { wheelEvent(event); }

        void wheelEvent_pub_parent(QWheelEvent* event)
        {
            QLineEdit::wheelEvent(event);
        }

        int metric_pub(PaintDeviceMetric m) const { return metric(m); }

        int metric_pub_parent(PaintDeviceMetric m) const
        {
            return QLineEdit::metric(m);
        }

    public:
        const QLineEditType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QLineEditType::cachedInstance(const QLineEditType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QLineEditType__h__
