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
#include "JSHTMLAppletElement.h"

#include "HTMLAppletElement.h"
#include "HTMLNames.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLAppletElementTableValues[] =
{
    { "align", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementAlign), (intptr_t)setJSHTMLAppletElementAlign },
    { "alt", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementAlt), (intptr_t)setJSHTMLAppletElementAlt },
    { "archive", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementArchive), (intptr_t)setJSHTMLAppletElementArchive },
    { "code", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementCode), (intptr_t)setJSHTMLAppletElementCode },
    { "codeBase", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementCodeBase), (intptr_t)setJSHTMLAppletElementCodeBase },
    { "height", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementHeight), (intptr_t)setJSHTMLAppletElementHeight },
    { "hspace", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementHspace), (intptr_t)setJSHTMLAppletElementHspace },
    { "name", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementName), (intptr_t)setJSHTMLAppletElementName },
    { "object", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementObject), (intptr_t)setJSHTMLAppletElementObject },
    { "vspace", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementVspace), (intptr_t)setJSHTMLAppletElementVspace },
    { "width", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementWidth), (intptr_t)setJSHTMLAppletElementWidth },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAppletElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAppletElementTable = { 35, 31, JSHTMLAppletElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLAppletElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAppletElementConstructorTable = { 1, 0, JSHTMLAppletElementConstructorTableValues, 0 };
const ClassInfo JSHTMLAppletElementConstructor::s_info = { "HTMLAppletElementConstructor", &Base::s_info, &JSHTMLAppletElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLAppletElementConstructor) };

JSHTMLAppletElementConstructor::JSHTMLAppletElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLAppletElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLAppletElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLAppletElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAppletElementConstructor, JSDOMWrapper>(exec, JSHTMLAppletElementConstructorTable, jsCast<JSHTMLAppletElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAppletElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAppletElementPrototypeTable = { 1, 0, JSHTMLAppletElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLAppletElementPrototype::s_info = { "HTMLAppletElementPrototype", &Base::s_info, &JSHTMLAppletElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLAppletElementPrototype) };

JSObject* JSHTMLAppletElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAppletElement>(vm, globalObject);
}

const ClassInfo JSHTMLAppletElement::s_info = { "HTMLAppletElement", &Base::s_info, &JSHTMLAppletElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLAppletElement) };

JSHTMLAppletElement::JSHTMLAppletElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAppletElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLAppletElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLAppletElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLAppletElementPrototype::create(vm, globalObject, JSHTMLAppletElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLAppletElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAppletElement* thisObject = jsCast<JSHTMLAppletElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHTMLAppletElement, Base>(exec, JSHTMLAppletElementTable, thisObject, propertyName, slot);
}

bool JSHTMLAppletElement::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHTMLAppletElement* thisObject = jsCast<JSHTMLAppletElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsHTMLAppletElementAlign(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementAlt(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::altAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementArchive(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::archiveAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementCode(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::codeAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementCodeBase(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::codebaseAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementHeight(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::heightAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementHspace(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::hspaceAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementObject(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::objectAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementVspace(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::vspaceAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementWidth(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLAppletElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::widthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAppletElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHTMLAppletElement* domObject = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLAppletElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSHTMLAppletElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLAppletElement* thisObject = jsCast<JSHTMLAppletElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    lookupPut<JSHTMLAppletElement, Base>(exec, propertyName, value, JSHTMLAppletElementTable, thisObject, slot);
}

void JSHTMLAppletElement::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    JSHTMLAppletElement* thisObject = jsCast<JSHTMLAppletElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    PutPropertySlot slot(thisObject, shouldThrow);
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

void setJSHTMLAppletElementAlign(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLAppletElementAlt(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::altAttr, nativeValue);
}


void setJSHTMLAppletElementArchive(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::archiveAttr, nativeValue);
}


void setJSHTMLAppletElementCode(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::codeAttr, nativeValue);
}


void setJSHTMLAppletElementCodeBase(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::codebaseAttr, nativeValue);
}


void setJSHTMLAppletElementHeight(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::heightAttr, nativeValue);
}


void setJSHTMLAppletElementHspace(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::hspaceAttr, nativeValue);
}


void setJSHTMLAppletElementName(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLAppletElementObject(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::objectAttr, nativeValue);
}


void setJSHTMLAppletElementVspace(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::vspaceAttr, nativeValue);
}


void setJSHTMLAppletElementWidth(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLAppletElement* castedThis = jsDynamicCast<JSHTMLAppletElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLAppletElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::widthAttr, nativeValue);
}


JSValue JSHTMLAppletElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAppletElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}