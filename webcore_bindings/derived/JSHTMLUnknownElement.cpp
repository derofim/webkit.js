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

#include "config.h"
#include "JSHTMLUnknownElement.h"

#include "HTMLUnknownElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLUnknownElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLUnknownElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUnknownElementTable = { 2, 1, JSHTMLUnknownElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLUnknownElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUnknownElementConstructorTable = { 1, 0, JSHTMLUnknownElementConstructorTableValues, 0 };
const ClassInfo JSHTMLUnknownElementConstructor::s_info = { "HTMLUnknownElementConstructor", &Base::s_info, &JSHTMLUnknownElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLUnknownElementConstructor) };

JSHTMLUnknownElementConstructor::JSHTMLUnknownElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLUnknownElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLUnknownElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLUnknownElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLUnknownElementConstructor, JSDOMWrapper>(exec, JSHTMLUnknownElementConstructorTable, jsCast<JSHTMLUnknownElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLUnknownElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUnknownElementPrototypeTable = { 1, 0, JSHTMLUnknownElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLUnknownElementPrototype::s_info = { "HTMLUnknownElementPrototype", &Base::s_info, &JSHTMLUnknownElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLUnknownElementPrototype) };

JSObject* JSHTMLUnknownElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLUnknownElement>(vm, globalObject);
}

const ClassInfo JSHTMLUnknownElement::s_info = { "HTMLUnknownElement", &Base::s_info, &JSHTMLUnknownElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLUnknownElement) };

JSHTMLUnknownElement::JSHTMLUnknownElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLUnknownElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLUnknownElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLUnknownElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLUnknownElementPrototype::create(vm, globalObject, JSHTMLUnknownElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLUnknownElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLUnknownElement* thisObject = jsCast<JSHTMLUnknownElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLUnknownElement, Base>(exec, JSHTMLUnknownElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsHTMLUnknownElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHTMLUnknownElement* domObject = jsDynamicCast<JSHTMLUnknownElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLUnknownElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSHTMLUnknownElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLUnknownElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}