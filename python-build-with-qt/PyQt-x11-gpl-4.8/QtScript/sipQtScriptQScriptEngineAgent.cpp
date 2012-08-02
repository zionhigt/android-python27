/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:36 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtScript.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtScript/qscriptengineagent.sip"
#include <qscriptengineagent.h>
#line 39 "sipQtScriptQScriptEngineAgent.cpp"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtScript/qscriptengine.sip"
#include <qscriptengine.h>
#line 43 "sipQtScriptQScriptEngineAgent.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtScriptQScriptEngineAgent.cpp"
#line 50 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 49 "sipQtScriptQScriptEngineAgent.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtScriptQScriptEngineAgent.cpp"


class sipQScriptEngineAgent : public QScriptEngineAgent
{
public:
    sipQScriptEngineAgent(QScriptEngine *);
    virtual ~sipQScriptEngineAgent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void scriptLoad(qint64,const QString&,const QString&,int);
    void scriptUnload(qint64);
    void contextPush();
    void contextPop();
    void functionEntry(qint64);
    void functionExit(qint64,const QScriptValue&);
    void positionChange(qint64,int,int);
    void exceptionThrow(qint64,const QScriptValue&,bool);
    void exceptionCatch(qint64,const QScriptValue&);
    bool supportsExtension(QScriptEngineAgent::Extension) const;
    QVariant extension(QScriptEngineAgent::Extension,const QVariant&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScriptEngineAgent(const sipQScriptEngineAgent &);
    sipQScriptEngineAgent &operator = (const sipQScriptEngineAgent &);

    char sipPyMethods[11];
};

sipQScriptEngineAgent::sipQScriptEngineAgent(QScriptEngine *a0): QScriptEngineAgent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQScriptEngineAgent::~sipQScriptEngineAgent()
{
    sipCommonDtor(sipPySelf);
}

void sipQScriptEngineAgent::scriptLoad(qint64 a0,const QString& a1,const QString& a2,int a3)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_scriptLoad);

    if (!meth)
    {
        QScriptEngineAgent::scriptLoad(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtScript_6(sip_gilstate_t,PyObject *,PY_LONG_LONG,const QString&,const QString&,int);

    sipVH_QtScript_6(sipGILState,meth,a0,a1,a2,a3);
}

void sipQScriptEngineAgent::scriptUnload(qint64 a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_scriptUnload);

    if (!meth)
    {
        QScriptEngineAgent::scriptUnload(a0);
        return;
    }

    extern void sipVH_QtScript_5(sip_gilstate_t,PyObject *,PY_LONG_LONG);

    sipVH_QtScript_5(sipGILState,meth,a0);
}

void sipQScriptEngineAgent::contextPush()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_contextPush);

    if (!meth)
    {
        QScriptEngineAgent::contextPush();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQScriptEngineAgent::contextPop()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_contextPop);

    if (!meth)
    {
        QScriptEngineAgent::contextPop();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQScriptEngineAgent::functionEntry(qint64 a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_functionEntry);

    if (!meth)
    {
        QScriptEngineAgent::functionEntry(a0);
        return;
    }

    extern void sipVH_QtScript_5(sip_gilstate_t,PyObject *,PY_LONG_LONG);

    sipVH_QtScript_5(sipGILState,meth,a0);
}

void sipQScriptEngineAgent::functionExit(qint64 a0,const QScriptValue& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_functionExit);

    if (!meth)
    {
        QScriptEngineAgent::functionExit(a0,a1);
        return;
    }

    extern void sipVH_QtScript_2(sip_gilstate_t,PyObject *,PY_LONG_LONG,const QScriptValue&);

    sipVH_QtScript_2(sipGILState,meth,a0,a1);
}

void sipQScriptEngineAgent::positionChange(qint64 a0,int a1,int a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_positionChange);

    if (!meth)
    {
        QScriptEngineAgent::positionChange(a0,a1,a2);
        return;
    }

    extern void sipVH_QtScript_4(sip_gilstate_t,PyObject *,PY_LONG_LONG,int,int);

    sipVH_QtScript_4(sipGILState,meth,a0,a1,a2);
}

void sipQScriptEngineAgent::exceptionThrow(qint64 a0,const QScriptValue& a1,bool a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_exceptionThrow);

    if (!meth)
    {
        QScriptEngineAgent::exceptionThrow(a0,a1,a2);
        return;
    }

    extern void sipVH_QtScript_3(sip_gilstate_t,PyObject *,PY_LONG_LONG,const QScriptValue&,bool);

    sipVH_QtScript_3(sipGILState,meth,a0,a1,a2);
}

void sipQScriptEngineAgent::exceptionCatch(qint64 a0,const QScriptValue& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_exceptionCatch);

    if (!meth)
    {
        QScriptEngineAgent::exceptionCatch(a0,a1);
        return;
    }

    extern void sipVH_QtScript_2(sip_gilstate_t,PyObject *,PY_LONG_LONG,const QScriptValue&);

    sipVH_QtScript_2(sipGILState,meth,a0,a1);
}

bool sipQScriptEngineAgent::supportsExtension(QScriptEngineAgent::Extension a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_supportsExtension);

    if (!meth)
        return QScriptEngineAgent::supportsExtension(a0);

    extern bool sipVH_QtScript_1(sip_gilstate_t,PyObject *,QScriptEngineAgent::Extension);

    return sipVH_QtScript_1(sipGILState,meth,a0);
}

QVariant sipQScriptEngineAgent::extension(QScriptEngineAgent::Extension a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_extension);

    if (!meth)
        return QScriptEngineAgent::extension(a0,a1);

    extern QVariant sipVH_QtScript_0(sip_gilstate_t,PyObject *,QScriptEngineAgent::Extension,const QVariant&);

    return sipVH_QtScript_0(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_QScriptEngineAgent_scriptLoad(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_scriptLoad(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;
        int a3;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BnJ1J1i", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::scriptLoad(a0,*a1,*a2,a3) : sipCpp->scriptLoad(a0,*a1,*a2,a3));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_scriptLoad, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_scriptUnload(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_scriptUnload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::scriptUnload(a0) : sipCpp->scriptUnload(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_scriptUnload, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_contextPush(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_contextPush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptEngineAgent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::contextPush() : sipCpp->contextPush());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_contextPush, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_contextPop(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_contextPop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptEngineAgent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::contextPop() : sipCpp->contextPop());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_contextPop, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_functionEntry(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_functionEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::functionEntry(a0) : sipCpp->functionEntry(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_functionEntry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_functionExit(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_functionExit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        const QScriptValue * a1;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BnJ9", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0, sipType_QScriptValue, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::functionExit(a0,*a1) : sipCpp->functionExit(a0,*a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_functionExit, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_positionChange(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_positionChange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        int a1;
        int a2;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bnii", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::positionChange(a0,a1,a2) : sipCpp->positionChange(a0,a1,a2));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_positionChange, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_exceptionThrow(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_exceptionThrow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        const QScriptValue * a1;
        bool a2;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BnJ9b", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0, sipType_QScriptValue, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::exceptionThrow(a0,*a1,a2) : sipCpp->exceptionThrow(a0,*a1,a2));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_exceptionThrow, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_exceptionCatch(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_exceptionCatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        const QScriptValue * a1;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BnJ9", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, &a0, sipType_QScriptValue, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QScriptEngineAgent::exceptionCatch(a0,*a1) : sipCpp->exceptionCatch(a0,*a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_exceptionCatch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_supportsExtension(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_supportsExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptEngineAgent::Extension a0;
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, sipType_QScriptEngineAgent_Extension, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QScriptEngineAgent::supportsExtension(a0) : sipCpp->supportsExtension(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_supportsExtension, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_extension(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_extension(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QScriptEngineAgent::Extension a0;
        const QVariant& a1def = QVariant();
        const QVariant * a1 = &a1def;
        int a1State = 0;
        QScriptEngineAgent *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_argument,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J1", &sipSelf, sipType_QScriptEngineAgent, &sipCpp, sipType_QScriptEngineAgent_Extension, &a0, sipType_QVariant,&a1, &a1State))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QScriptEngineAgent::extension(a0,*a1) : sipCpp->extension(a0,*a1)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_extension, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QScriptEngineAgent_engine(PyObject *, PyObject *);}
static PyObject *meth_QScriptEngineAgent_engine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptEngineAgent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptEngineAgent, &sipCpp))
        {
            QScriptEngine *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->engine();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QScriptEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptEngineAgent, sipName_engine, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptEngineAgent(void *, const sipTypeDef *);}
static void *cast_QScriptEngineAgent(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptEngineAgent)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptEngineAgent(void *, int);}
static void release_QScriptEngineAgent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScriptEngineAgent *>(sipCppV);
    else
        delete reinterpret_cast<QScriptEngineAgent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptEngineAgent(sipSimpleWrapper *);}
static void dealloc_QScriptEngineAgent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQScriptEngineAgent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptEngineAgent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QScriptEngineAgent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QScriptEngineAgent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScriptEngineAgent *sipCpp = 0;

    {
        QScriptEngine * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QScriptEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQScriptEngineAgent(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptEngineAgent[] = {
    {SIP_MLNAME_CAST(sipName_contextPop), meth_QScriptEngineAgent_contextPop, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contextPush), meth_QScriptEngineAgent_contextPush, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_engine), meth_QScriptEngineAgent_engine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_exceptionCatch), meth_QScriptEngineAgent_exceptionCatch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_exceptionThrow), meth_QScriptEngineAgent_exceptionThrow, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_extension), (PyCFunction)meth_QScriptEngineAgent_extension, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_functionEntry), meth_QScriptEngineAgent_functionEntry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_functionExit), meth_QScriptEngineAgent_functionExit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_positionChange), meth_QScriptEngineAgent_positionChange, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scriptLoad), meth_QScriptEngineAgent_scriptLoad, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scriptUnload), meth_QScriptEngineAgent_scriptUnload, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_supportsExtension), meth_QScriptEngineAgent_supportsExtension, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QScriptEngineAgent[] = {
    {sipName_DebuggerInvocationRequest, QScriptEngineAgent::DebuggerInvocationRequest, 17},
};


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptEngineAgent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptEngineAgent,
        {0}
    },
    {
        sipNameNr_QScriptEngineAgent,
        {0, 0, 1},
        12, methods_QScriptEngineAgent,
        1, enummembers_QScriptEngineAgent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QScriptEngineAgent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QScriptEngineAgent,
    0,
    0,
    0,
    release_QScriptEngineAgent,
    cast_QScriptEngineAgent,
    0,
    0,
    0
},
    0,
    0,
    0
};