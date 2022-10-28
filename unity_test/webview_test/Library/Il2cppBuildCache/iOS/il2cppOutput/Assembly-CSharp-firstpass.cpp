#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// H5WebView
struct H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F;
// JSONTest
struct JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OCJson
struct OCJson_tC03E279995EDBEF6E01261A65009A13A41732544;
// OCMsg
struct OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D0AC11A704E46CB0A9771B60775F304657C37C;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisOCJson_tC03E279995EDBEF6E01261A65009A13A41732544_m706AC08DC855BBB28C11F3B6E40F073531E6CF7A_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct Il2CppArrayBounds;

// JSONTest
struct JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4  : public RuntimeObject
{
	// System.String JSONTest::<url>k__BackingField
	String_t* ___U3CurlU3Ek__BackingField_0;
	// System.Int32 JSONTest::<msgType>k__BackingField
	int32_t ___U3CmsgTypeU3Ek__BackingField_1;
	// System.String JSONTest::<msg>k__BackingField
	String_t* ___U3CmsgU3Ek__BackingField_2;
};

// OCJson
struct OCJson_tC03E279995EDBEF6E01261A65009A13A41732544  : public RuntimeObject
{
	// System.Int32 OCJson::<msgType>k__BackingField
	int32_t ___U3CmsgTypeU3Ek__BackingField_0;
	// System.Int32 OCJson::<msg>k__BackingField
	int32_t ___U3CmsgU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// H5WebView
struct H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OCMsg
struct OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text OCMsg::txt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txt_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;

// System.Void JSONTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTest__ctor_m05055FDC1E73F7CECBFCCFB7735C00D0383B8324 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, const RuntimeMethod* method) ;
// System.Void JSONTest::set_url(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_url_m25CFD90B7272DA9970926D3B7850B75BE304FC66_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JSONTest::set_msg(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_msg_mDC0A393B85BEB84369B1EC1B83889A1C91846018_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void JSONTest::set_msgType(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_msgType_m9975EA8C8821A5BF9D564A6F51DE965217CB6DF2_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void H5WebView::CSharpMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView_CSharpMessage_m26532C43A7743E6D69EC502F88EE4F6F140496E9 (int32_t ___msgType0, String_t* ___json1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<OCJson>(System.String)
inline OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* JsonConvert_DeserializeObject_TisOCJson_tC03E279995EDBEF6E01261A65009A13A41732544_m706AC08DC855BBB28C11F3B6E40F073531E6CF7A (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL CSharpMessage(int32_t, char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void H5WebView::CSharpMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView_CSharpMessage_m26532C43A7743E6D69EC502F88EE4F6F140496E9 (int32_t ___msgType0, String_t* ___json1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___json1' to native representation
	char* ____json1_marshaled = NULL;
	____json1_marshaled = il2cpp_codegen_marshal_string(___json1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CSharpMessage)(___msgType0, ____json1_marshaled);

	// Marshaling cleanup of parameter '___json1' native representation
	il2cpp_codegen_marshal_free(____json1_marshaled);
	____json1_marshaled = NULL;

}
// System.Void H5WebView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView_Start_m647A865A8981A14F7B0E6271655C74FD0999567C (H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void H5WebView::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView_OnButtonClick_m918623F13106235A4AFA7351DCACEEB5D7BE327D (H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D0AC11A704E46CB0A9771B60775F304657C37C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// JSONTest obj = new JSONTest();
		JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* L_0 = (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4*)il2cpp_codegen_object_new(JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONTest__ctor_m05055FDC1E73F7CECBFCCFB7735C00D0383B8324(L_0, NULL);
		// obj.url = "http://www.baidu.com";
		JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* L_1 = L_0;
		NullCheck(L_1);
		JSONTest_set_url_m25CFD90B7272DA9970926D3B7850B75BE304FC66_inline(L_1, _stringLiteralB3D0AC11A704E46CB0A9771B60775F304657C37C, NULL);
		// obj.msg = "test";
		JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* L_2 = L_1;
		NullCheck(L_2);
		JSONTest_set_msg_mDC0A393B85BEB84369B1EC1B83889A1C91846018_inline(L_2, _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, NULL);
		// obj.msgType = 100;
		JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* L_3 = L_2;
		NullCheck(L_3);
		JSONTest_set_msgType_m9975EA8C8821A5BF9D564A6F51DE965217CB6DF2_inline(L_3, ((int32_t)100), NULL);
		// string json = JsonConvert.SerializeObject(obj);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_3, NULL);
		V_0 = L_4;
		// CSharpMessage(100,json);
		String_t* L_5 = V_0;
		H5WebView_CSharpMessage_m26532C43A7743E6D69EC502F88EE4F6F140496E9(((int32_t)100), L_5, NULL);
		// Debug.Log(json);
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void H5WebView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView_Update_m67EAC1D2972B10EDAA34C69DC3C53B50D2B2A11F (H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void H5WebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H5WebView__ctor_m2E3B0644D7B798C3F04E35607B5ADA26D9E1EFF3 (H5WebView_tE0B15424902E20E7001BC53800C8CDF521AF281F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String JSONTest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONTest_get_url_m40E41A6915D47384CBE12F99D00A91266C92C602 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, const RuntimeMethod* method) 
{
	{
		// public string url{get;set;}
		String_t* L_0 = __this->___U3CurlU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void JSONTest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTest_set_url_m25CFD90B7272DA9970926D3B7850B75BE304FC66 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string url{get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CurlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CurlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 JSONTest::get_msgType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONTest_get_msgType_m8F81E5A4948705AA1FC0B0BD9E3AFACCC488D51A (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, const RuntimeMethod* method) 
{
	{
		// public int msgType{get;set;}
		int32_t L_0 = __this->___U3CmsgTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void JSONTest::set_msgType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTest_set_msgType_m9975EA8C8821A5BF9D564A6F51DE965217CB6DF2 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int msgType{get;set;}
		int32_t L_0 = ___value0;
		__this->___U3CmsgTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String JSONTest::get_msg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONTest_get_msg_mFD718605E8972CF222988A2EABE0F4F2B5CDAAC5 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, const RuntimeMethod* method) 
{
	{
		// public string msg{get;set;}
		String_t* L_0 = __this->___U3CmsgU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void JSONTest::set_msg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTest_set_msg_mDC0A393B85BEB84369B1EC1B83889A1C91846018 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string msg{get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CmsgU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsgU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void JSONTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTest__ctor_m05055FDC1E73F7CECBFCCFB7735C00D0383B8324 (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OCMsg::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCMsg_Start_m2974246943CE1C7C5C33FF26E6D8AEA21769A7D2 (OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OCMsg::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCMsg_Update_mF7D096BB1D00CEDABB959C23CAEBAC97D94B57EA (OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OCMsg::OCMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCMsg_OCMessage_mF6A175029E7C1F053F6B8C97FE98AE3E0453D2EF (OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisOCJson_tC03E279995EDBEF6E01261A65009A13A41732544_m706AC08DC855BBB28C11F3B6E40F073531E6CF7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OCJson _json= JsonConvert.DeserializeObject<OCJson>(json);
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* L_1;
		L_1 = JsonConvert_DeserializeObject_TisOCJson_tC03E279995EDBEF6E01261A65009A13A41732544_m706AC08DC855BBB28C11F3B6E40F073531E6CF7A(L_0, JsonConvert_DeserializeObject_TisOCJson_tC03E279995EDBEF6E01261A65009A13A41732544_m706AC08DC855BBB28C11F3B6E40F073531E6CF7A_RuntimeMethod_var);
		// txt.text = json;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txt_4;
		String_t* L_3 = ___json0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void OCMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCMsg__ctor_m1A639195ED3D97C07EA708C11D2260B5168604C6 (OCMsg_t4798B4A3F2ADF7772976DE4CCC2D9153D36DD14E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 OCJson::get_msgType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OCJson_get_msgType_mBD6F30DBC1D899B60777D83AC8771E442F3BD7E0 (OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* __this, const RuntimeMethod* method) 
{
	{
		// public int msgType{get;set;}
		int32_t L_0 = __this->___U3CmsgTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void OCJson::set_msgType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCJson_set_msgType_m08FA94E55232904718E8BB8D408B2C37335FAF4B (OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int msgType{get;set;}
		int32_t L_0 = ___value0;
		__this->___U3CmsgTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 OCJson::get_msg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OCJson_get_msg_m86C3857E410F8EBB5405D8CDACF9686CA2849752 (OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* __this, const RuntimeMethod* method) 
{
	{
		// public int msg{get;set;}
		int32_t L_0 = __this->___U3CmsgU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void OCJson::set_msg(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCJson_set_msg_m142E90D09FB4ADF7914F929797F38431BF0408DE (OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int msg{get;set;}
		int32_t L_0 = ___value0;
		__this->___U3CmsgU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void OCJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OCJson__ctor_mC904C05E6BC608E2B39C01A552799E0A01F86398 (OCJson_tC03E279995EDBEF6E01261A65009A13A41732544* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_url_m25CFD90B7272DA9970926D3B7850B75BE304FC66_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string url{get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CurlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CurlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_msg_mDC0A393B85BEB84369B1EC1B83889A1C91846018_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string msg{get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CmsgU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsgU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JSONTest_set_msgType_m9975EA8C8821A5BF9D564A6F51DE965217CB6DF2_inline (JSONTest_t49870EE2C054017228F33D5A8AE9AB8E037B97B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int msgType{get;set;}
		int32_t L_0 = ___value0;
		__this->___U3CmsgTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
