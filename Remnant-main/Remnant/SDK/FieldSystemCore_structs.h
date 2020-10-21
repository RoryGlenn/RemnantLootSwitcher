#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FieldSystemCore.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4,

};

// Enum FieldSystemCore.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_StayDynamic              = 0,
	Field_LinearForce              = 1,
	Field_PhysicsType_Max          = 2,

};

// Enum FieldSystemCore.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,

};

// Enum FieldSystemCore.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_Max                      = 5,
	Field_MAX                      = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
