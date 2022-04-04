class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class EyewearBase;
	class JoeyXSunGlasses: EyewearBase
	{
		scope=2;
		model="\DZ\characters\glasses\joeyx_black.p3d";
		displayName="JoeyX sunglasses";
		lootTag[]=
		{
			"Civilian",
			"Military",
			"Military_west"
		};
		descriptionShort="Made of plastic with a fashionable wrap-around design, gray frames and broad temple arms, this form of protective eyewear will protect the eyes from the sun.";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\glasses\data\joeyx.rvmat",
				"DZ\characters\glasses\data\joeyx_damage.rvmat",
				"DZ\characters\glasses\data\joeyx_destruct.rvmat"
			};
		};
		weight=20;
	};
	class RocketAviators: EyewearBase
	{
		scope=2;
		model="\DZ\characters\glasses\rocket_aviators.p3d";
		displayName="Rocket Aviators";
		lootTag[]=
		{
			"Military",
			"Military_west",
			"Military_east"
		};
		descriptionShort="With oversized teardrop-shaped lenses and a thin metal frame, this form of protective eyewear, popularized in the late 1960s, will protect the eyes from the sun.";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\glasses\data\goggles2_metal.rvmat",
				"DZ\characters\glasses\data\goggles2_metal_damage.rvmat",
				"DZ\characters\glasses\data\goggles2_metal_destruct.rvmat"
			};
		};
		weight=36;
	};
	class Glasses_Designer: EyewearBase
	{
		scope=2;
		model="\DZ\characters\glasses\sunglasses_designer.p3d";
		displayName="Designer Sunglasses";
		lootTag[]=
		{
			"Civilian"
		};
		descriptionShort="Made of plastic with a fashionable wrap-around design, gray frames and broad temple arms, this form of protective eyewear will protect the eyes from the sun.";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\glasses\data\sunglass_designer.rvmat",
				"DZ\characters\glasses\data\sunglass_designer_damage.rvmat",
				"DZ\characters\glasses\data\sunglass_designer_destruct.rvmat"
			};
		};
		weight=40;
	};
	class Glasses_ThickFrames: EyewearBase
	{
		scope=2;
		model="\DZ\characters\glasses\glasses_thick_frame.p3d";
		displayName="Glasses with thick frames";
		lootTag[]=
		{
			"Civilian"
		};
		descriptionShort="Made of plastic with a hip retro design inspiration in mind. Not really protecting or helping you in any way, they are there mainly to make one look good.";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\glasses\data\ThickFrameGlasses.rvmat",
				"DZ\characters\glasses\data\ThickFrameGlasses_damage.rvmat",
				"DZ\characters\glasses\data\ThickFrameGlasses_destruct.rvmat"
			};
		};
		weight=50;
	};
	class Glasses_ThinFrames: EyewearBase
	{
		scope=2;
		model="\DZ\characters\glasses\glasses_thin_frame.p3d";
		displayName="Glasses with thin frames";
		lootTag[]=
		{
			"Civilian"
		};
		descriptionShort="Made of plastic with a stylish slim design. Not really protecting or helping you in any way, they are there mainly to make one look good.";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\glasses\data\ThinFrameGlasses.rvmat",
				"DZ\characters\glasses\data\ThinFrameGlasses_damage.rvmat",
				"DZ\characters\glasses\data\ThinFrameGlasses_destruct.rvmat"
			};
		};
		weight=30;
	};
};
