class CfgPatches
{
	class DZ_Characters_Heads
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class MaleWhiteHeadNew: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="\DZ\characters\heads\data\hhl_m_white01_002_medium_co.paa";
			head="MaleWhiteHead_01_New";
			material="DZ\characters\heads\data\hhl_m_white01_medium_002.rvmat";
			identityTypes[]=
			{
				"maleWhite"
			};
		};
		class MaleWhiteHead_01_New: Default
		{
		};
	};
	class MaleAsianHeadNew: Default
	{
		class Default
		{
			displayname="male asian face ";
			texture="\DZ\characters\heads\data\hhl_m_asian01_001_light_co.paa";
			head="MaleAsianHead_01_New";
			material="dz\characters\heads\data\hhl_m_asian01_001_light.rvmat";
			identityTypes[]=
			{
				"maleAsian"
			};
		};
		class MaleAsianHead_01_New: Default
		{
		};
	};
	class MaleAfricanHeadNew: Default
	{
		class Default
		{
			displayname="male african face ";
			texture="\DZ\characters\heads\data\hhl_m_african01_001_light_co.paa";
			head="MaleAfricanHead_01_New";
			material="dz\characters\heads\data\hhl_m_african01_001_light.rvmat";
			identityTypes[]=
			{
				"maleAfrican"
			};
		};
		class MaleAfricanHead_01_New: Default
		{
		};
	};
	class MaleLatinoHeadNew: Default
	{
		class Default
		{
			displayname="male latino face ";
			texture="\DZ\characters\heads\data\hhl_m_latino01_001_medium_co.paa";
			head="MaleLatinoHead_01_New";
			material="dz\characters\heads\data\hhl_m_latino01_001_medium.rvmat";
			identityTypes[]=
			{
				"maleLatino"
			};
		};
		class MaleLatinoHead_01_New: Default
		{
		};
	};
	class MaleMattHead: Default
	{
		class Default
		{
			displayname="male Matt face ";
			texture="\DZ\characters\heads\data\hhl_m_Matt_co.paa";
			head="MaleWhiteHead_Matt";
			material="dz\characters\heads\data\hhl_m_matt.rvmat";
			identityTypes[]=
			{
				"maleMatt"
			};
		};
		class MaleWhiteHead_Matt: Default
		{
		};
	};
	class MaleRaghuHead: Default
	{
		class Default
		{
			displayname="male Raghu face ";
			texture="\DZ\characters\heads\data\hhl_m_Raghu_co.paa";
			head="MaleIndianHead_Raghu";
			material="dz\characters\heads\data\hhl_m_raghu.rvmat";
			identityTypes[]=
			{
				"maleRaghu"
			};
		};
		class MaleIndianHead_Raghu: Default
		{
		};
	};
	class MaleDeanHead: Default
	{
		class Default
		{
			displayname="male Dean face ";
			texture="\DZ\characters\heads\data\hhl_m_dean_co.paa";
			head="MaleWhiteHead_Dean";
			material="dz\characters\heads\data\hhl_m_dean.rvmat";
			identityTypes[]=
			{
				"maleDean"
			};
		};
		class MaleWhiteHead_Dean: Default
		{
		};
	};
	class FemaleWhiteHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="dz\characters\heads\data\hhl_f_white01_001_medium_co.paa";
			head="FemaleWhiteHead_01";
			identityTypes[]=
			{
				"Woman"
			};
			material="dz\characters\heads\data\hhl_f_white_01.rvmat";
		};
		class FemaleWhiteHead_01: Default
		{
		};
	};
	class FemaleAsianHead: Default
	{
		class Default
		{
			displayname="female asian face ";
			texture="dz\characters\heads\data\hhl_f_asian01_001_medium_co.paa";
			head="FemaleAsianHead_01";
			material="dz\characters\heads\data\hhl_f_asian_01.rvmat";
			identityTypes[]=
			{
				"femaleAsian"
			};
		};
		class FemaleAsianHead_01: Default
		{
		};
	};
	class FemaleAfricanHead: Default
	{
		class Default
		{
			displayname="female african face ";
			texture="dz\characters\heads\data\hhl_f_african01_001_medium_co.paa";
			head="FemaleAfricanHead_01";
			material="dz\characters\heads\data\hhl_f_african_01.rvmat";
			identityTypes[]=
			{
				"femaleAfrican"
			};
		};
		class FemaleAfricanHead_01: Default
		{
		};
	};
	class FemaleLatinoHead: Default
	{
		class Default
		{
			displayname="female latino face ";
			texture="dz\characters\heads\data\hhl_f_latino01_001_medium_co.paa";
			head="FemaleLatinoHead_01";
			material="dz\characters\heads\data\hhl_f_latino_01.rvmat";
			identityTypes[]=
			{
				"femaleLatino"
			};
		};
		class FemaleLatinoHead_01: Default
		{
		};
	};
	class FemaleKamilaHead: Default
	{
		class Default
		{
			displayname="female Kamila face ";
			texture="\DZ\characters\heads\data\hhl_f_Kamila_co.paa";
			head="FemaleWhiteHead_Kamila";
			material="dz\characters\heads\data\hhl_f_kamila.rvmat";
			identityTypes[]=
			{
				"femaleKamila"
			};
		};
		class FemaleWhiteHead_Kamila: Default
		{
		};
	};
	class FemaleSitaHead: Default
	{
		class Default
		{
			displayname="female Sita face ";
			texture="\DZ\characters\heads\data\hhl_f_Sita_co.paa";
			head="FemaleIndianHead_Sita";
			material="dz\characters\heads\data\hhl_f_sita.rvmat";
			identityTypes[]=
			{
				"femaleSita"
			};
		};
		class FemaleIndianHead_Sita: Default
		{
		};
	};
	class FemaleHenrietHead: Default
	{
		class Default
		{
			displayname="female Henriet face ";
			texture="\DZ\characters\heads\data\hhl_f_henriet_co.paa";
			head="FemaleWhiteHead_Henriet";
			material="dz\characters\heads\data\hhl_f_henriet.rvmat";
			identityTypes[]=
			{
				"femaleHenriet"
			};
		};
		class FemaleWhiteHead_Henriet: Default
		{
		};
	};
	class FemaleJanaZHead: Default
	{
		class Default
		{
			displayname="female Jana Z face ";
			texture="\DZ\characters\heads\data\hhl_f_JanaZ_co.paa";
			head="FemaleWhiteHead_JanaZ";
			material="dz\characters\heads\data\hhl_f_janaz.rvmat";
			identityTypes[]=
			{
				"femaleJanaZ"
			};
		};
		class FemaleWhiteHead_JanaZ: Default
		{
		};
	};
	class AnimalHead
	{
		class Default
		{
			displayname="$STR_FN_AnimalHead_Default";
			texture="\DZ\Characters\Heads\Data\hhl_m_white_06_co.paa";
			head="";
			identityTypes[]=
			{
				"Animal"
			};
			material="";
		};
		class Animal: Default
		{
		};
	};
	class MaleWhiteHeadAbove: MaleWhiteHeadNew
	{
		class Default
		{
			displayname="testing face above";
			head="MaleWhiteHeadAbove_Above";
			texture="\DZ\characters\heads\data\hhl_m_white01_002_medium_co.paa";
			material="DZ\characters\heads\data\hhl_m_white01_medium_002.rvmat";
			identityTypes[]=
			{
				"maleWhite"
			};
		};
		class MaleWhiteHeadAbove_Above: Default
		{
		};
	};
};
class CfgGlasses
{
	class None
	{
		displayname="None";
		identityTypes[]=
		{
			"NoGlasses",
			1000,
			"Glasses",
			700
		};
		scope=2;
	};
	class joeyx_black: None
	{
		displayname="Joeyx";
		model="\DZ\characters\glasses\joeyx_black.p3d";
		identityTypes[]=
		{
			"Glasses",
			300
		};
		scope=2;
	};
};
class CfgNonAIVehicles
{
	class ProxyBysta
	{
		autocenter=0;
		scope=2;
		reversed=1;
		animated=1;
		model="";
		simulation="ProxySubpart";
	};
};
class MaskFaceDZ
{
	mask[]=
	{
		"Face_BrowFrontLeft",
		1,
		"Face_BrowFrontRight",
		1,
		"Face_BrowMiddle",
		1,
		"Face_BrowSideLeft",
		1,
		"Face_BrowSideRight",
		1,
		"Face_CornerLeft",
		1,
		"Face_CornerRight",
		1,
		"Face_Eyelids",
		1,
		"Face_Forehead",
		1,
		"Face_CheekFrontLeft",
		1,
		"Face_CheekFrontRight",
		1,
		"Face_CheekSideLeft",
		1,
		"Face_CheekSideRight",
		1,
		"Face_CheekUpperLeft",
		1,
		"Face_CheekUpperRight",
		1,
		"Face_Chin",
		1,
		"Face_ChopLeft",
		1,
		"Face_ChopRight",
		1,
		"Face_Jawbone",
		1,
		"Face_Jowl",
		1,
		"Face_LipLowerLeft",
		1,
		"Face_LipLowerMiddle",
		1,
		"Face_LipLowerRight",
		1,
		"Face_LipUpperLeft",
		1,
		"Face_LipUpperMiddle",
		1,
		"Face_LipUpperRight",
		1,
		"Face_NostrilLeft",
		1,
		"Face_NostrilRight",
		1,
		"Face_Tongue",
		1
	};
};
class EyeMask
{
	mask[]=
	{
		"Face_EyelidUpperRight",
		1,
		"Face_EyelidLowerRight",
		1,
		"Face_EyelidUpperLeft",
		1,
		"Face_EyelidLowerLeft",
		1,
		"EyeLeft",
		0.40000001,
		"EyeRight",
		0.40000001
	};
};
class MaskLipDZ
{
	mask[]=
	{
		"Face_BrowFrontLeft",
		0.5,
		"Face_BrowFrontRight",
		0.5,
		"Face_BrowMiddle",
		0.5,
		"Face_BrowSideLeft",
		0.5,
		"Face_BrowSideRight",
		0.5,
		"Face_CornerLeft",
		0.5,
		"Face_CornerRight",
		0.5,
		"Face_Forehead",
		0.5,
		"Face_CheekFrontLeft",
		0.5,
		"Face_CheekFrontRight",
		0.5,
		"Face_CheekSideLeft",
		0.5,
		"Face_CheekSideRight",
		0.5,
		"Face_CheekUpperLeft",
		0.5,
		"Face_CheekUpperRight",
		0.5,
		"Face_Chin",
		0.5,
		"Face_ChopLeft",
		0.5,
		"Face_ChopRight",
		0.5,
		"Face_Jawbone",
		0.5,
		"Face_Jowl",
		0.5,
		"Face_LipLowerLeft",
		0.5,
		"Face_LipLowerMiddle",
		0.5,
		"Face_LipLowerRight",
		0.5,
		"Face_LipUpperLeft",
		0.5,
		"Face_LipUpperMiddle",
		0.5,
		"Face_LipUpperRight",
		0.5,
		"Face_NostrilLeft",
		0.5,
		"Face_NostrilRight",
		0.5,
		"Face_Tongue",
		0.5
	};
};
class CfgHeads
{
	class Default
	{
		model="\DZ\Characters\Heads\m_white_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_m_white_06.rvmat",
				"DZ\Characters\Heads\Data\hhl_m_white_06_injury1.rvmat",
				"DZ\Characters\Heads\Data\hhl_m_white_06_injury2.rvmat"
			};
		};
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
		class Grimaces
		{
			class Eyes
			{
				type="eyes";
				eyeMaxAngle=0.15000001;
				eyelidUpStartAngle=0.40000001;
				eyelidUpMaxAngle=1;
				eyelidDownStartAngle=0.090000004;
				eyelidDownMaxAngle=0.30000001;
			};
			class Lipsync
			{
				type="lipsync";
				vizem[]=
				{
					"dz\anims\data\anim\fce\Neutral.rtm",
					"dz\anims\data\anim\fce\vizem\a.rtm",
					"dz\anims\data\anim\fce\vizem\e2.rtm",
					"dz\anims\data\anim\fce\vizem\f.rtm",
					"dz\anims\data\anim\fce\vizem\m.rtm",
					"dz\anims\data\anim\fce\vizem\y.rtm",
					"dz\anims\data\anim\fce\vizem\v.rtm",
					"dz\anims\data\anim\fce\vizem\i.rtm"
				};
			};
			class RTM_Face
			{
				type="rtm";
				anim="dz\anims\data\anim\fce\Neutral.rtm";
			};
			class NeutralFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Neutral.rtm";
			};
			class DeadFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Dead.rtm";
			};
			class DangerFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Danger.rtm";
			};
			class HurtFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Hurt.rtm";
			};
			class AwareFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Aware.rtm";
			};
			class SafeFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Safe.rtm";
			};
			class CombatFace: RTM_Face
			{
				anim="dz\anims\data\anim\fce\Combat.rtm";
			};
			class Neutral
			{
				type="compound";
				class Items
				{
					class NeutralFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Dead
			{
				type="compound";
				class Items
				{
					class DeadFace: MaskFaceDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Unconscious
			{
				type="compound";
				class Items
				{
					class UnconsciousFace: MaskFaceDZ
					{
					};
				};
			};
			class Danger
			{
				type="compound";
				class Items
				{
					class DangerFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Hurt
			{
				type="compound";
				class Items
				{
					class HurtFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Aware
			{
				type="compound";
				class Items
				{
					class AwareFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Safe
			{
				type="compound";
				class Items
				{
					class SafeFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
			class Combat
			{
				type="compound";
				class Items
				{
					class CombatFace: MaskFaceDZ
					{
					};
					class Lipsync: MaskLipDZ
					{
					};
					class Eyes: EyeMask
					{
					};
				};
			};
		};
	};
	class MaleWhiteHead_01_New: Default
	{
		model="\DZ\characters\heads\m_white_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_white01_medium_002.rvmat",
				"DZ\characters\heads\data\hhl_m_white01_medium_002_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_white01_medium_002_injury2.rvmat"
			};
		};
	};
	class MaleAsianHead_01_New: Default
	{
		model="\DZ\characters\heads\m_asian_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_asian01_001_light.rvmat",
				"DZ\characters\heads\data\hhl_m_asian01_001_light_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_asian01_001_light_injury2.rvmat"
			};
		};
	};
	class MaleAfricanHead_01_New: Default
	{
		model="\DZ\characters\heads\m_african_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_african01_001_light.rvmat",
				"DZ\characters\heads\data\hhl_m_african01_001_light_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_african01_001_light_injury2.rvmat"
			};
		};
	};
	class MaleLatinoHead_01_New: Default
	{
		model="\DZ\characters\heads\m_latino_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_latino01_001_medium.rvmat",
				"DZ\characters\heads\data\hhl_m_latino01_001_medium_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_latino01_001_medium_injury2.rvmat"
			};
		};
	};
	class MaleWhiteHead_Matt: Default
	{
		model="\DZ\characters\heads\m_matt.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_matt.rvmat",
				"DZ\characters\heads\data\hhl_m_matt_injury.rvmat",
				"DZ\characters\heads\data\hhl_m_matt_injury2.rvmat"
			};
		};
	};
	class MaleWhiteHead_Dean: Default
	{
		model="\DZ\characters\heads\m_dean.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_dean.rvmat",
				"DZ\characters\heads\data\hhl_m_dean_injury.rvmat",
				"DZ\characters\heads\data\hhl_m_dean_injury2.rvmat"
			};
		};
	};
	class MaleIndianHead_Raghu: Default
	{
		model="\DZ\characters\heads\m_raghu.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_raghu.rvmat",
				"DZ\characters\heads\data\hhl_m_raghu_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_raghu_injury2.rvmat"
			};
		};
	};
	class FemaleWhiteHead_01: Default
	{
		model="\DZ\Characters\Heads\f_white_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_f_white_01.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_white_01_injury1.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_white_01_injury2.rvmat"
			};
		};
	};
	class FemaleAsianHead_01: Default
	{
		model="\DZ\characters\heads\f_asian_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\heads\data\hhl_f_asian_01.rvmat",
				"dz\characters\heads\data\hhl_f_asian_01_injury1.rvmat",
				"dz\characters\heads\data\hhl_f_asian_01_injury2.rvmat"
			};
		};
	};
	class FemaleAfricanHead_01: Default
	{
		model="\DZ\characters\heads\f_african_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\heads\data\hhl_f_african_01.rvmat",
				"dz\characters\heads\data\hhl_f_african_01_injury1.rvmat",
				"dz\characters\heads\data\hhl_f_african_01_injury2.rvmat"
			};
		};
	};
	class FemaleLatinoHead_01: Default
	{
		model="\DZ\characters\heads\f_latino_01.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\heads\data\hhl_f_latino_01.rvmat",
				"dz\characters\heads\data\hhl_f_latino_01_injury1.rvmat",
				"dz\characters\heads\data\hhl_f_latino_01_injury2.rvmat"
			};
		};
	};
	class FemaleWhiteHead_Kamila: Default
	{
		model="\DZ\Characters\Heads\f_kamila.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_f_kamila.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_kamila_injury.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_kamila_injury2.rvmat"
			};
		};
	};
	class FemaleIndianHead_Sita: Default
	{
		model="\DZ\Characters\Heads\f_sita.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_f_sita.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_sita_injury1.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_sita_injury2.rvmat"
			};
		};
	};
	class FemaleWhiteHead_Henriet: Default
	{
		model="\DZ\Characters\Heads\f_henriet.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_f_henriet.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_henriet_injury.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_henriet_injury2.rvmat"
			};
		};
	};
	class FemaleWhiteHead_JanaZ: Default
	{
		model="\DZ\Characters\Heads\f_janaz.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\Characters\Heads\Data\hhl_f_janaz.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_janaz_injury.rvmat",
				"DZ\Characters\Heads\Data\hhl_f_janaz_injury2.rvmat"
			};
		};
	};
	class MaleWhiteHeadAbove_Above: Default
	{
		model="\dz\characters\heads\m_white_01_above0.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\heads\data\hhl_m_white01_medium_002.rvmat",
				"DZ\characters\heads\data\hhl_m_white01_medium_002_injury1.rvmat",
				"DZ\characters\heads\data\hhl_m_white01_medium_002_injury2.rvmat"
			};
		};
	};
};
