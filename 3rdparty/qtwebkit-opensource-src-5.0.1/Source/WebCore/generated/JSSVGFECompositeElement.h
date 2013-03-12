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

#ifndef JSSVGFECompositeElement_h
#define JSSVGFECompositeElement_h

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGFECompositeElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGFECompositeElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGFECompositeElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFECompositeElement> impl)
    {
        JSSVGFECompositeElement* ptr = new (NotNull, JSC::allocateCell<JSSVGFECompositeElement>(globalObject->globalData().heap)) JSSVGFECompositeElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGFECompositeElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGFECompositeElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGFECompositeElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGFECompositeElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFECompositeElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFECompositeElementPrototype>(globalData.heap)) JSSVGFECompositeElementPrototype(globalData, globalObject, structure);
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
    JSSVGFECompositeElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGFECompositeElementConstructor : public DOMConstructorObject {
private:
    JSSVGFECompositeElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFECompositeElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFECompositeElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFECompositeElementConstructor>(*exec->heap())) JSSVGFECompositeElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsSVGFECompositeElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGFECompositeElementIn1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementIn2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementOperator(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementK1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementK2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementK3(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementK4(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementResult(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementClassName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementStyle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_OVER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_IN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_OUT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_ATOP(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_XOR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGFECompositeElementSVG_FECOMPOSITE_OPERATOR_ARITHMETIC(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)

#endif