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
#include "JSWebKitTransitionEvent.h"

#include "JSDictionary.h"
#include "URL.h"
#include "WebKitTransitionEvent.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitTransitionEventTableValues[] =
{
    { "propertyName", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventPropertyName), (intptr_t)0 },
    { "elapsedTime", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventElapsedTime), (intptr_t)0 },
    { "pseudoElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventPseudoElement), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitTransitionEventTable = { 9, 7, JSWebKitTransitionEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitTransitionEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitTransitionEventConstructorTable = { 1, 0, JSWebKitTransitionEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSWebKitTransitionEventConstructor::constructJSWebKitTransitionEvent(ExecState* exec)
{
    JSWebKitTransitionEventConstructor* jsConstructor = jsCast<JSWebKitTransitionEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    WebKitTransitionEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillWebKitTransitionEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<WebKitTransitionEvent> event = WebKitTransitionEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillWebKitTransitionEventInit(WebKitTransitionEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("propertyName", eventInit.propertyName))
        return false;
    if (!dictionary.tryGetProperty("elapsedTime", eventInit.elapsedTime))
        return false;
    if (!dictionary.tryGetProperty("pseudoElement", eventInit.pseudoElement))
        return false;
    return true;
}

const ClassInfo JSWebKitTransitionEventConstructor::s_info = { "WebKitTransitionEventConstructor", &Base::s_info, &JSWebKitTransitionEventConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitTransitionEventConstructor) };

JSWebKitTransitionEventConstructor::JSWebKitTransitionEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitTransitionEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitTransitionEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitTransitionEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitTransitionEventConstructor, JSDOMWrapper>(exec, JSWebKitTransitionEventConstructorTable, jsCast<JSWebKitTransitionEventConstructor*>(object), propertyName, slot);
}

ConstructType JSWebKitTransitionEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebKitTransitionEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebKitTransitionEventPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitTransitionEventPrototypeTable = { 1, 0, JSWebKitTransitionEventPrototypeTableValues, 0 };
const ClassInfo JSWebKitTransitionEventPrototype::s_info = { "WebKitTransitionEventPrototype", &Base::s_info, &JSWebKitTransitionEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitTransitionEventPrototype) };

JSObject* JSWebKitTransitionEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitTransitionEvent>(vm, globalObject);
}

const ClassInfo JSWebKitTransitionEvent::s_info = { "WebKitTransitionEvent", &Base::s_info, &JSWebKitTransitionEventTable, 0 , CREATE_METHOD_TABLE(JSWebKitTransitionEvent) };

JSWebKitTransitionEvent::JSWebKitTransitionEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitTransitionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSWebKitTransitionEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebKitTransitionEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitTransitionEventPrototype::create(vm, globalObject, JSWebKitTransitionEventPrototype::createStructure(vm, globalObject, JSEventPrototype::self(vm, globalObject)));
}

bool JSWebKitTransitionEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitTransitionEvent* thisObject = jsCast<JSWebKitTransitionEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWebKitTransitionEvent, Base>(exec, JSWebKitTransitionEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsWebKitTransitionEventPropertyName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSWebKitTransitionEvent* castedThis = jsDynamicCast<JSWebKitTransitionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    WebKitTransitionEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.propertyName());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitTransitionEventElapsedTime(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSWebKitTransitionEvent* castedThis = jsDynamicCast<JSWebKitTransitionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    WebKitTransitionEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.elapsedTime());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitTransitionEventPseudoElement(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSWebKitTransitionEvent* castedThis = jsDynamicCast<JSWebKitTransitionEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    WebKitTransitionEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pseudoElement());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitTransitionEventConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSWebKitTransitionEvent* domObject = jsDynamicCast<JSWebKitTransitionEvent*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebKitTransitionEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebKitTransitionEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitTransitionEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
