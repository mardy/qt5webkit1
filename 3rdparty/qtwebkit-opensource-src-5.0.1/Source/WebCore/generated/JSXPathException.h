/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSXPathException_h
#define JSXPathException_h

#include "JSDOMBinding.h"
#include "XPathException.h"
#include <runtime/ErrorPrototype.h>
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>

namespace WebCore {

class JSXPathException : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSXPathException* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathException> impl)
    {
        JSXPathException* ptr = new (NotNull, JSC::allocateCell<JSXPathException>(globalObject->globalData().heap)) JSXPathException(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSXPathException();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    XPathException* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    XPathException* m_impl;
protected:
    JSXPathException(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<XPathException>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSXPathExceptionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, XPathException*)
{
    DEFINE_STATIC_LOCAL(JSXPathExceptionOwner, jsXPathExceptionOwner, ());
    return &jsXPathExceptionOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, XPathException*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XPathException*);
XPathException* toXPathException(JSC::JSValue);

class JSXPathExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSXPathExceptionPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXPathExceptionPrototype* ptr = new (NotNull, JSC::allocateCell<JSXPathExceptionPrototype>(globalData.heap)) JSXPathExceptionPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSXPathExceptionPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSXPathExceptionConstructor : public DOMConstructorObject {
private:
    JSXPathExceptionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXPathExceptionConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXPathExceptionConstructor* ptr = new (NotNull, JSC::allocateCell<JSXPathExceptionConstructor>(*exec->heap())) JSXPathExceptionConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXPathExceptionPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::JSValue jsXPathExceptionCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXPathExceptionName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXPathExceptionMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXPathExceptionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsXPathExceptionINVALID_EXPRESSION_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXPathExceptionTYPE_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif