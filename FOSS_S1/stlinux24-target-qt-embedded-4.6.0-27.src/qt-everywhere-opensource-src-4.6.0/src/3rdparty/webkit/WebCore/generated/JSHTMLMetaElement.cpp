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
#include "JSHTMLMetaElement.h"

#include "HTMLMetaElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLMetaElement);

/* Hash table */

static const HashTableValue JSHTMLMetaElementTableValues[6] =
{
    { "content", DontDelete, (intptr_t)jsHTMLMetaElementContent, (intptr_t)setJSHTMLMetaElementContent },
    { "httpEquiv", DontDelete, (intptr_t)jsHTMLMetaElementHttpEquiv, (intptr_t)setJSHTMLMetaElementHttpEquiv },
    { "name", DontDelete, (intptr_t)jsHTMLMetaElementName, (intptr_t)setJSHTMLMetaElementName },
    { "scheme", DontDelete, (intptr_t)jsHTMLMetaElementScheme, (intptr_t)setJSHTMLMetaElementScheme },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLMetaElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSHTMLMetaElementTableValues, 0 };
#else
    { 17, 15, JSHTMLMetaElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLMetaElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLMetaElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLMetaElementConstructorTableValues, 0 };
#endif

class JSHTMLMetaElementConstructor : public DOMConstructorObject {
public:
    JSHTMLMetaElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLMetaElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLMetaElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLMetaElementConstructor::s_info = { "HTMLMetaElementConstructor", 0, &JSHTMLMetaElementConstructorTable, 0 };

bool JSHTMLMetaElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMetaElementConstructor, DOMObject>(exec, &JSHTMLMetaElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLMetaElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMetaElementConstructor, DOMObject>(exec, &JSHTMLMetaElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMetaElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLMetaElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLMetaElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLMetaElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLMetaElementPrototype::s_info = { "HTMLMetaElementPrototype", 0, &JSHTMLMetaElementPrototypeTable, 0 };

JSObject* JSHTMLMetaElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMetaElement>(exec, globalObject);
}

const ClassInfo JSHTMLMetaElement::s_info = { "HTMLMetaElement", &JSHTMLElement::s_info, &JSHTMLMetaElementTable, 0 };

JSHTMLMetaElement::JSHTMLMetaElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMetaElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLMetaElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLMetaElementPrototype(JSHTMLMetaElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLMetaElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMetaElement, Base>(exec, &JSHTMLMetaElementTable, this, propertyName, slot);
}

bool JSHTMLMetaElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMetaElement, Base>(exec, &JSHTMLMetaElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLMetaElementContent(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    return jsString(exec, imp->content());
}

JSValue jsHTMLMetaElementHttpEquiv(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    return jsString(exec, imp->httpEquiv());
}

JSValue jsHTMLMetaElementName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    return jsString(exec, imp->name());
}

JSValue jsHTMLMetaElementScheme(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLMetaElement* castedThis = static_cast<JSHTMLMetaElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(castedThis->impl());
    return jsString(exec, imp->scheme());
}

JSValue jsHTMLMetaElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLMetaElement* domObject = static_cast<JSHTMLMetaElement*>(asObject(slot.slotBase()));
    return JSHTMLMetaElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLMetaElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLMetaElement, Base>(exec, propertyName, value, &JSHTMLMetaElementTable, this, slot);
}

void setJSHTMLMetaElementContent(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(static_cast<JSHTMLMetaElement*>(thisObject)->impl());
    imp->setContent(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLMetaElementHttpEquiv(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(static_cast<JSHTMLMetaElement*>(thisObject)->impl());
    imp->setHttpEquiv(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLMetaElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(static_cast<JSHTMLMetaElement*>(thisObject)->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLMetaElementScheme(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(static_cast<JSHTMLMetaElement*>(thisObject)->impl());
    imp->setScheme(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLMetaElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMetaElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}