//*****************************************************************************
// Copyright (c) 2019 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

#ifndef __MuQt5__$TType__h__
#define __MuQt5__$TType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{
    {%%muqtForwardDeclaration%%}

    //
    //  NOTE: file generated by qt2mu.py
    //

    class $TType : public Class
    {
    public:
        {%%typeDeclarations%%}
        typedef MuQt_$T MuQtType;
        typedef $T QtType;

        //
        //  Constructors
        //

        $TType(Context* context, const char* name, Class* superClass = 0);
        virtual ~$TType();

        {%%isInheritableFunc%%}
        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        {%%virtualArray%%}
    };

    {%%nativeMuQtClass%%}
    {%%cachedInstanceFunc%%}

} // namespace Mu

#endif // __MuQt5__$TType__h__
