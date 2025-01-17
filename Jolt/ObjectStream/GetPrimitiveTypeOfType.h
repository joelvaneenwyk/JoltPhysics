// SPDX-FileCopyrightText: 2021 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#include <Jolt/Core/RTTI.h>

JPH_NAMESPACE_BEGIN

/// Helper functions to get the underlying RTTI type of a type (so e.g. vector<sometype> will return sometype)
template <class T>				
RTTI *GetPrimitiveTypeOfType(T *)
{ 
	return GetRTTIOfType((T *)nullptr);
}

template <class T>				
RTTI *GetPrimitiveTypeOfType(T **)
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

template <class T>				
RTTI *GetPrimitiveTypeOfType(Ref<T> *)
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

template <class T>				
RTTI *GetPrimitiveTypeOfType(RefConst<T> *)
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

template <class T>				
RTTI *GetPrimitiveTypeOfType(vector<T> *)
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

template <class T, uint N>				
RTTI *GetPrimitiveTypeOfType(StaticArray<T, N> *)
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

template <class T, uint N>				
RTTI *GetPrimitiveTypeOfType(T (*)[N])
{ 
	return GetPrimitiveTypeOfType((T *)nullptr);
}

JPH_NAMESPACE_END
