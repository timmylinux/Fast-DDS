// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file AnnotationParameterValue.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#include <utility>

#include <fastcdr/Cdr.h>
#include <fastcdr/CdrSizeCalculator.hpp>
#include <fastcdr/exceptions/BadParamException.h>

#include <fastrtps/types/AnnotationParameterValue.h>

using namespace eprosima::fastcdr::exception;

#include "AnnotationParameterValueCdrAux.ipp"


namespace eprosima {
namespace fastrtps {

using namespace rtps;

namespace types {



ExtendedAnnotationParameterValue::ExtendedAnnotationParameterValue()
{
}

ExtendedAnnotationParameterValue::~ExtendedAnnotationParameterValue()
{
}

ExtendedAnnotationParameterValue::ExtendedAnnotationParameterValue(
        const ExtendedAnnotationParameterValue&)
{
}

ExtendedAnnotationParameterValue::ExtendedAnnotationParameterValue(
        ExtendedAnnotationParameterValue&&)
{
}

ExtendedAnnotationParameterValue& ExtendedAnnotationParameterValue::operator =(
        const ExtendedAnnotationParameterValue&)
{

    return *this;
}

ExtendedAnnotationParameterValue& ExtendedAnnotationParameterValue::operator =(
        ExtendedAnnotationParameterValue&&)
{

    return *this;
}

size_t ExtendedAnnotationParameterValue::getCdrSerializedSize(
        const ExtendedAnnotationParameterValue& data,
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    eprosima::fastcdr::CdrSizeCalculator calculator(eprosima::fastcdr::CdrVersion::XCDRv2);
    return eprosima::fastcdr::calculate_serialized_size(calculator, data, current_alignment) - initial_alignment;
}

void ExtendedAnnotationParameterValue::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    eprosima::fastcdr::serialize(scdr, *this);
}

void ExtendedAnnotationParameterValue::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    eprosima::fastcdr::deserialize(dcdr, *this);
}

size_t ExtendedAnnotationParameterValue::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;


    return current_align;
}

bool ExtendedAnnotationParameterValue::isKeyDefined()
{
    return false;
}

void ExtendedAnnotationParameterValue::serializeKey(
        eprosima::fastcdr::Cdr&) const
{
}

AnnotationParameterValue::AnnotationParameterValue()
{
    m__d = TK_NONE;
    m_boolean_value = false;
    m_byte_value = 0;
    m_int16_value = 0;
    m_uint_16_value = 0;
    m_int32_value = 0;
    m_uint32_value = 0;
    m_int64_value = 0;
    m_uint64_value = 0;
    m_float32_value = 0.0;
    m_float64_value = 0.0;
    m_float128_value = 0.0;
    m_char_value = 0;
    m_wchar_value = 0;
    m_enumerated_value = 0;
    //m_extended_value = 0;
}

AnnotationParameterValue::~AnnotationParameterValue()
{
}

AnnotationParameterValue::AnnotationParameterValue(
        const AnnotationParameterValue& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case TK_BOOLEAN:
            m_boolean_value = x.m_boolean_value;
            break;
        case TK_BYTE:
            m_byte_value = x.m_byte_value;
            break;
        case TK_INT16:
            m_int16_value = x.m_int16_value;
            break;
        case TK_UINT16:
            m_uint_16_value = x.m_uint_16_value;
            break;
        case TK_INT32:
            m_int32_value = x.m_int32_value;
            break;
        case TK_UINT32:
            m_uint32_value = x.m_uint32_value;
            break;
        case TK_INT64:
            m_int64_value = x.m_int64_value;
            break;
        case TK_UINT64:
            m_uint64_value = x.m_uint64_value;
            break;
        case TK_FLOAT32:
            m_float32_value = x.m_float32_value;
            break;
        case TK_FLOAT64:
            m_float64_value = x.m_float64_value;
            break;
        case TK_FLOAT128:
            m_float128_value = x.m_float128_value;
            break;
        case TK_CHAR8:
            m_char_value = x.m_char_value;
            break;
        case TK_CHAR16:
            m_wchar_value = x.m_wchar_value;
            break;
        case TK_ENUM:
            m_enumerated_value = x.m_enumerated_value;
            break;
        case TK_STRING8:
            m_string8_value = x.m_string8_value;
            break;
        case TK_STRING16:
            m_string16_value = x.m_string16_value;
            break;
        default:
            m_extended_value = x.m_extended_value;
            break;
    }
}

AnnotationParameterValue::AnnotationParameterValue(
        AnnotationParameterValue&& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case TK_BOOLEAN:
            m_boolean_value = x.m_boolean_value;
            break;
        case TK_BYTE:
            m_byte_value = x.m_byte_value;
            break;
        case TK_INT16:
            m_int16_value = x.m_int16_value;
            break;
        case TK_UINT16:
            m_uint_16_value = x.m_uint_16_value;
            break;
        case TK_INT32:
            m_int32_value = x.m_int32_value;
            break;
        case TK_UINT32:
            m_uint32_value = x.m_uint32_value;
            break;
        case TK_INT64:
            m_int64_value = x.m_int64_value;
            break;
        case TK_UINT64:
            m_uint64_value = x.m_uint64_value;
            break;
        case TK_FLOAT32:
            m_float32_value = x.m_float32_value;
            break;
        case TK_FLOAT64:
            m_float64_value = x.m_float64_value;
            break;
        case TK_FLOAT128:
            m_float128_value = x.m_float128_value;
            break;
        case TK_CHAR8:
            m_char_value = x.m_char_value;
            break;
        case TK_CHAR16:
            m_wchar_value = x.m_wchar_value;
            break;
        case TK_ENUM:
            m_enumerated_value = x.m_enumerated_value;
            break;
        case TK_STRING8:
            m_string8_value = std::move(x.m_string8_value);
            break;
        case TK_STRING16:
            m_string16_value = std::move(x.m_string16_value);
            break;
        default:
            m_extended_value = std::move(x.m_extended_value);
            break;
    }
}

AnnotationParameterValue& AnnotationParameterValue::operator =(
        const AnnotationParameterValue& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case TK_BOOLEAN:
            m_boolean_value = x.m_boolean_value;
            break;
        case TK_BYTE:
            m_byte_value = x.m_byte_value;
            break;
        case TK_INT16:
            m_int16_value = x.m_int16_value;
            break;
        case TK_UINT16:
            m_uint_16_value = x.m_uint_16_value;
            break;
        case TK_INT32:
            m_int32_value = x.m_int32_value;
            break;
        case TK_UINT32:
            m_uint32_value = x.m_uint32_value;
            break;
        case TK_INT64:
            m_int64_value = x.m_int64_value;
            break;
        case TK_UINT64:
            m_uint64_value = x.m_uint64_value;
            break;
        case TK_FLOAT32:
            m_float32_value = x.m_float32_value;
            break;
        case TK_FLOAT64:
            m_float64_value = x.m_float64_value;
            break;
        case TK_FLOAT128:
            m_float128_value = x.m_float128_value;
            break;
        case TK_CHAR8:
            m_char_value = x.m_char_value;
            break;
        case TK_CHAR16:
            m_wchar_value = x.m_wchar_value;
            break;
        case TK_ENUM:
            m_enumerated_value = x.m_enumerated_value;
            break;
        case TK_STRING8:
            m_string8_value = x.m_string8_value;
            break;
        case TK_STRING16:
            m_string16_value = x.m_string16_value;
            break;
        default:
            m_extended_value = x.m_extended_value;
            break;
    }

    return *this;
}

AnnotationParameterValue& AnnotationParameterValue::operator =(
        AnnotationParameterValue&& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case TK_BOOLEAN:
            m_boolean_value = x.m_boolean_value;
            break;
        case TK_BYTE:
            m_byte_value = x.m_byte_value;
            break;
        case TK_INT16:
            m_int16_value = x.m_int16_value;
            break;
        case TK_UINT16:
            m_uint_16_value = x.m_uint_16_value;
            break;
        case TK_INT32:
            m_int32_value = x.m_int32_value;
            break;
        case TK_UINT32:
            m_uint32_value = x.m_uint32_value;
            break;
        case TK_INT64:
            m_int64_value = x.m_int64_value;
            break;
        case TK_UINT64:
            m_uint64_value = x.m_uint64_value;
            break;
        case TK_FLOAT32:
            m_float32_value = x.m_float32_value;
            break;
        case TK_FLOAT64:
            m_float64_value = x.m_float64_value;
            break;
        case TK_FLOAT128:
            m_float128_value = x.m_float128_value;
            break;
        case TK_CHAR8:
            m_char_value = x.m_char_value;
            break;
        case TK_CHAR16:
            m_wchar_value = x.m_wchar_value;
            break;
        case TK_ENUM:
            m_enumerated_value = x.m_enumerated_value;
            break;
        case TK_STRING8:
            m_string8_value = std::move(x.m_string8_value);
            break;
        case TK_STRING16:
            m_string16_value = std::move(x.m_string16_value);
            break;
        default:
            m_extended_value = std::move(x.m_extended_value);
            break;
    }

    return *this;
}

void AnnotationParameterValue::_d(
        char __d)                           // Special case to ease, sets the current active member.
{
    m__d = __d;
}

char AnnotationParameterValue::_d() const
{
    return m__d;
}

char& AnnotationParameterValue::_d()
{
    return m__d;
}

void AnnotationParameterValue::boolean_value(
        bool _boolean_value)
{
    m_boolean_value = _boolean_value;
    m__d = TK_BOOLEAN;
}

bool AnnotationParameterValue::boolean_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_BOOLEAN:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_boolean_value;
}

bool& AnnotationParameterValue::boolean_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_BOOLEAN:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_boolean_value;
}

void AnnotationParameterValue::byte_value(
        uint8_t _byte_value)
{
    m_byte_value = _byte_value;
    m__d = TK_BYTE;
}

uint8_t AnnotationParameterValue::byte_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_BYTE:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_byte_value;
}

uint8_t& AnnotationParameterValue::byte_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_BYTE:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_byte_value;
}

void AnnotationParameterValue::int16_value(
        int16_t _int16_value)
{
    m_int16_value = _int16_value;
    m__d = TK_INT16;
}

int16_t AnnotationParameterValue::int16_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int16_value;
}

int16_t& AnnotationParameterValue::int16_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int16_value;
}

void AnnotationParameterValue::uint_16_value(
        uint16_t _uint_16_value)
{
    m_uint_16_value = _uint_16_value;
    m__d = TK_UINT16;
}

uint16_t AnnotationParameterValue::uint_16_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint_16_value;
}

uint16_t& AnnotationParameterValue::uint_16_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint_16_value;
}

void AnnotationParameterValue::int32_value(
        int32_t _int32_value)
{
    m_int32_value = _int32_value;
    m__d = TK_INT32;
}

int32_t AnnotationParameterValue::int32_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int32_value;
}

int32_t& AnnotationParameterValue::int32_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int32_value;
}

void AnnotationParameterValue::uint32_value(
        uint32_t _uint32_value)
{
    m_uint32_value = _uint32_value;
    m__d = TK_UINT32;
}

uint32_t AnnotationParameterValue::uint32_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint32_value;
}

uint32_t& AnnotationParameterValue::uint32_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint32_value;
}

void AnnotationParameterValue::int64_value(
        int64_t _int64_value)
{
    m_int64_value = _int64_value;
    m__d = TK_INT64;
}

int64_t AnnotationParameterValue::int64_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int64_value;
}

int64_t& AnnotationParameterValue::int64_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_INT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_int64_value;
}

void AnnotationParameterValue::uint64_value(
        uint64_t _uint64_value)
{
    m_uint64_value = _uint64_value;
    m__d = TK_UINT64;
}

uint64_t AnnotationParameterValue::uint64_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint64_value;
}

uint64_t& AnnotationParameterValue::uint64_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_UINT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_uint64_value;
}

void AnnotationParameterValue::float32_value(
        float _float32_value)
{
    m_float32_value = _float32_value;
    m__d = TK_FLOAT32;
}

float AnnotationParameterValue::float32_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float32_value;
}

float& AnnotationParameterValue::float32_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT32:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float32_value;
}

void AnnotationParameterValue::float64_value(
        double _float64_value)
{
    m_float64_value = _float64_value;
    m__d = TK_FLOAT64;
}

double AnnotationParameterValue::float64_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float64_value;
}

double& AnnotationParameterValue::float64_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT64:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float64_value;
}

void AnnotationParameterValue::float128_value(
        long double _float128_value)
{
    m_float128_value = _float128_value;
    m__d = TK_FLOAT128;
}

long double AnnotationParameterValue::float128_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT128:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float128_value;
}

long double& AnnotationParameterValue::float128_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_FLOAT128:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_float128_value;
}

void AnnotationParameterValue::char_value(
        char _char_value)
{
    m_char_value = _char_value;
    m__d = TK_CHAR8;
}

char AnnotationParameterValue::char_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_CHAR8:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_char_value;
}

char& AnnotationParameterValue::char_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_CHAR8:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_char_value;
}

void AnnotationParameterValue::wchar_value(
        wchar_t _wchar_value)
{
    m_wchar_value = _wchar_value;
    m__d = TK_CHAR16;
}

wchar_t AnnotationParameterValue::wchar_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_CHAR16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_wchar_value;
}

wchar_t& AnnotationParameterValue::wchar_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_CHAR16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_wchar_value;
}

void AnnotationParameterValue::enumerated_value(
        int32_t _enumerated_value)
{
    m_enumerated_value = _enumerated_value;
    m__d = TK_ENUM;
}

int32_t AnnotationParameterValue::enumerated_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_ENUM:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_enumerated_value;
}

int32_t& AnnotationParameterValue::enumerated_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_ENUM:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_enumerated_value;
}

void AnnotationParameterValue::string8_value(
        const std::string& _string8_value)
{
    m_string8_value = _string8_value;
    m__d = TK_STRING8;
}

void AnnotationParameterValue::string8_value(
        std::string&& _string8_value)
{
    m_string8_value = std::move(_string8_value);
    m__d = TK_STRING8;
}

const std::string& AnnotationParameterValue::string8_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_STRING8:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_string8_value;
}

std::string& AnnotationParameterValue::string8_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_STRING8:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_string8_value;
}

void AnnotationParameterValue::string16_value(
        const std::wstring& _string16_value)
{
    m_string16_value = _string16_value;
    m__d = TK_STRING16;
}

void AnnotationParameterValue::string16_value(
        std::wstring&& _string16_value)
{
    m_string16_value = std::move(_string16_value);
    m__d = TK_STRING16;
}

const std::wstring& AnnotationParameterValue::string16_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_STRING16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_string16_value;
}

std::wstring& AnnotationParameterValue::string16_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_STRING16:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_string16_value;
}

void AnnotationParameterValue::extended_value(
        const ExtendedAnnotationParameterValue& _extended_value)
{
    m_extended_value = _extended_value;
    m__d = TK_NONE;
}

void AnnotationParameterValue::extended_value(
        ExtendedAnnotationParameterValue&& _extended_value)
{
    m_extended_value = std::move(_extended_value);
    m__d = TK_NONE;
}

const ExtendedAnnotationParameterValue& AnnotationParameterValue::extended_value() const
{
    bool b = false;

    switch (m__d)
    {
        case TK_BOOLEAN:
        case TK_BYTE:
        case TK_INT16:
        case TK_UINT16:
        case TK_INT32:
        case TK_UINT32:
        case TK_INT64:
        case TK_UINT64:
        case TK_FLOAT32:
        case TK_FLOAT64:
        case TK_FLOAT128:
        case TK_CHAR8:
        case TK_CHAR16:
        case TK_ENUM:
        case TK_STRING16:
        case TK_STRING8:
            break;
        default:
            b = true;
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_extended_value;
}

ExtendedAnnotationParameterValue& AnnotationParameterValue::extended_value()
{
    bool b = false;

    switch (m__d)
    {
        case TK_BOOLEAN:
        case TK_BYTE:
        case TK_INT16:
        case TK_UINT16:
        case TK_INT32:
        case TK_UINT32:
        case TK_INT64:
        case TK_UINT64:
        case TK_FLOAT32:
        case TK_FLOAT64:
        case TK_FLOAT128:
        case TK_CHAR8:
        case TK_CHAR16:
        case TK_ENUM:
        case TK_STRING16:
        case TK_STRING8:
            break;
        default:
            b = true;
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }

    return m_extended_value;
}

size_t AnnotationParameterValue::getCdrSerializedSize(
        const AnnotationParameterValue& data,
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    eprosima::fastcdr::CdrSizeCalculator calculator(eprosima::fastcdr::CdrVersion::XCDRv2);
    return eprosima::fastcdr::calculate_serialized_size(calculator, data, current_alignment) - initial_alignment;
}

void AnnotationParameterValue::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    eprosima::fastcdr::serialize(scdr, *this);
}

void AnnotationParameterValue::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    eprosima::fastcdr::deserialize(dcdr, *this);
}

bool AnnotationParameterValue::operator ==(
        const AnnotationParameterValue& other) const
{
    if (m__d != other.m__d)
    {
        return false;
    }

    switch (m__d)
    {
        case TK_BOOLEAN:
            return m_boolean_value == other.m_boolean_value;
            break;
        case TK_BYTE:
            return m_byte_value == other.m_byte_value;
            break;
        case TK_INT16:
            return m_int16_value == other.m_int16_value;
            break;
        case TK_UINT16:
            return m_uint_16_value == other.m_uint_16_value;
            break;
        case TK_INT32:
            return m_int32_value == other.m_int32_value;
            break;
        case TK_UINT32:
            return m_uint32_value == other.m_uint32_value;
            break;
        case TK_INT64:
            return m_int64_value == other.m_int64_value;
            break;
        case TK_UINT64:
            return m_uint64_value == other.m_uint64_value;
            break;
        case TK_FLOAT32:
            return m_float32_value == other.m_float32_value;
            break;
        case TK_FLOAT64:
            return m_float64_value == other.m_float64_value;
            break;
        case TK_FLOAT128:
            return m_float128_value == other.m_float128_value;
            break;
        case TK_CHAR8:
            return m_char_value == other.m_char_value;
            break;
        case TK_CHAR16:
            return m_wchar_value == other.m_wchar_value;
            break;
        case TK_ENUM:
            return m_enumerated_value == other.m_enumerated_value;
            break;
        case TK_STRING8:
            return m_string8_value == other.m_string8_value;
            break;
        case TK_STRING16:
            return m_string16_value == other.m_string16_value;
            break;
        default:
            return m_extended_value == other.m_extended_value;
            break;
    }
}

AppliedAnnotationParameter::AppliedAnnotationParameter()
{


}

AppliedAnnotationParameter::~AppliedAnnotationParameter()
{
}

AppliedAnnotationParameter::AppliedAnnotationParameter(
        const AppliedAnnotationParameter& x)
{
    m_paramname_hash = x.m_paramname_hash;
    m_value = x.m_value;
}

AppliedAnnotationParameter::AppliedAnnotationParameter(
        AppliedAnnotationParameter&& x)
{
    m_paramname_hash = std::move(x.m_paramname_hash);
    m_value = std::move(x.m_value);
}

AppliedAnnotationParameter& AppliedAnnotationParameter::operator =(
        const AppliedAnnotationParameter& x)
{
    m_paramname_hash = x.m_paramname_hash;
    m_value = x.m_value;

    return *this;
}

AppliedAnnotationParameter& AppliedAnnotationParameter::operator =(
        AppliedAnnotationParameter&& x)
{
    m_paramname_hash = std::move(x.m_paramname_hash);
    m_value = std::move(x.m_value);

    return *this;
}

bool AppliedAnnotationParameter::operator ==(
        const AppliedAnnotationParameter& other) const
{
    return m_paramname_hash == other.m_paramname_hash &&
           m_value == other.m_value;
}

size_t AppliedAnnotationParameter::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;




    return current_align;
}

bool AppliedAnnotationParameter::isKeyDefined()
{
    return false;
}

void AppliedAnnotationParameter::serializeKey(
        eprosima::fastcdr::Cdr&) const
{
}

AppliedAnnotation::AppliedAnnotation()
{
}

AppliedAnnotation::~AppliedAnnotation()
{
}

AppliedAnnotation::AppliedAnnotation(
        const AppliedAnnotation& x)
{
    m_annotation_typeid = x.m_annotation_typeid;
    m_param_seq = x.m_param_seq;
}

AppliedAnnotation::AppliedAnnotation(
        AppliedAnnotation&& x)
{
    m_annotation_typeid = std::move(x.m_annotation_typeid);
    m_param_seq = std::move(x.m_param_seq);
}

AppliedAnnotation& AppliedAnnotation::operator =(
        const AppliedAnnotation& x)
{
    m_annotation_typeid = x.m_annotation_typeid;
    m_param_seq = x.m_param_seq;

    return *this;
}

AppliedAnnotation& AppliedAnnotation::operator =(
        AppliedAnnotation&& x)
{
    m_annotation_typeid = std::move(x.m_annotation_typeid);
    m_param_seq = std::move(x.m_param_seq);

    return *this;
}

bool AppliedAnnotation::operator ==(
        const AppliedAnnotation& other) const
{
    if (m_annotation_typeid == other.m_annotation_typeid)
    {
        return compareSequence(m_param_seq, other.m_param_seq);
    }
    return false;
}

size_t AppliedAnnotation::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;

    return current_align;
}

bool AppliedAnnotation::isKeyDefined()
{
    return false;
}

void AppliedAnnotation::serializeKey(
        eprosima::fastcdr::Cdr&) const
{
}

AppliedVerbatimAnnotation::AppliedVerbatimAnnotation()
{
}

AppliedVerbatimAnnotation::~AppliedVerbatimAnnotation()
{
}

AppliedVerbatimAnnotation::AppliedVerbatimAnnotation(
        const AppliedVerbatimAnnotation& x)
{
    m_placement = x.m_placement;
    m_language = x.m_language;
    m_text = x.m_text;
}

AppliedVerbatimAnnotation::AppliedVerbatimAnnotation(
        AppliedVerbatimAnnotation&& x)
{
    m_placement = std::move(x.m_placement);
    m_language = std::move(x.m_language);
    m_text = std::move(x.m_text);
}

AppliedVerbatimAnnotation& AppliedVerbatimAnnotation::operator =(
        const AppliedVerbatimAnnotation& x)
{
    m_placement = x.m_placement;
    m_language = x.m_language;
    m_text = x.m_text;

    return *this;
}

AppliedVerbatimAnnotation& AppliedVerbatimAnnotation::operator =(
        AppliedVerbatimAnnotation&& x)
{
    m_placement = std::move(x.m_placement);
    m_language = std::move(x.m_language);
    m_text = std::move(x.m_text);

    return *this;
}

bool AppliedVerbatimAnnotation::operator ==(
        const AppliedVerbatimAnnotation& other) const
{
    return m_placement == other.m_placement &&
           m_language == other.m_language &&
           m_text == other.m_text;
}

size_t AppliedVerbatimAnnotation::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;

    return current_align;
}

bool AppliedVerbatimAnnotation::isKeyDefined()
{
    return false;
}

void AppliedVerbatimAnnotation::serializeKey(
        eprosima::fastcdr::Cdr&) const
{
}

AppliedBuiltinMemberAnnotations::AppliedBuiltinMemberAnnotations()
{
}

AppliedBuiltinMemberAnnotations::~AppliedBuiltinMemberAnnotations()
{
}

AppliedBuiltinMemberAnnotations::AppliedBuiltinMemberAnnotations(
        const AppliedBuiltinMemberAnnotations& x)
{
    m_unit = x.m_unit;
    m_min = x.m_min;
    m_max = x.m_max;
    m_hash_id = x.m_hash_id;
}

AppliedBuiltinMemberAnnotations::AppliedBuiltinMemberAnnotations(
        AppliedBuiltinMemberAnnotations&& x)
{
    m_unit = std::move(x.m_unit);
    m_min = std::move(x.m_min);
    m_max = std::move(x.m_max);
    m_hash_id = std::move(x.m_hash_id);
}

AppliedBuiltinMemberAnnotations& AppliedBuiltinMemberAnnotations::operator =(
        const AppliedBuiltinMemberAnnotations& x)
{
    m_unit = x.m_unit;
    m_min = x.m_min;
    m_max = x.m_max;
    m_hash_id = x.m_hash_id;

    return *this;
}

AppliedBuiltinMemberAnnotations& AppliedBuiltinMemberAnnotations::operator =(
        AppliedBuiltinMemberAnnotations&& x)
{
    m_unit = std::move(x.m_unit);
    m_min = std::move(x.m_min);
    m_max = std::move(x.m_max);
    m_hash_id = std::move(x.m_hash_id);

    return *this;
}

bool AppliedBuiltinMemberAnnotations::operator ==(
        const AppliedBuiltinMemberAnnotations& other) const
{
    return m_unit == other.m_unit &&
           m_min == other.m_min &&
           m_max == other.m_max &&
           m_hash_id == other.m_hash_id;
}

size_t AppliedBuiltinMemberAnnotations::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;

    return current_align;
}

bool AppliedBuiltinMemberAnnotations::isKeyDefined()
{
    return false;
}

void AppliedBuiltinMemberAnnotations::serializeKey(
        eprosima::fastcdr::Cdr&) const
{
}

} // namespace types
} // namespace fastrtps
} // namespace eprosima
