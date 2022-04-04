class CfgPatches
{
	class DZ_Characters_Pants
	{
		units[]=
		{
			"Jeans_Black",
			"Jeans_BlueDark",
			"Jeans_Blue",
			"Jeans_Brown",
			"Jeans_Green",
			"Jeans_Grey",
			"MaleLegs",
			"FemaleLegs"
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
	class InventoryBase;
	class MaleLegsNew: InventoryBase
	{
		scope=1;
		displayName="Underwear shorts new";
		model="\DZ\characters\pants\legs_new_m.p3d";
		inventorySlot="Legs";
		hiddenSelections[]=
		{
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_white01_medium_002.rvmat"
		};
	};
	class MaleAsianLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\hhl_m_asian01_001_light_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_asian01_001_light.rvmat"
		};
	};
	class MaleAfricanLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\heads\data\hhl_m_african01_001_light_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_african01_001_light.rvmat"
		};
	};
	class MaleLatinoLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_latino01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_latino01_001_medium.rvmat"
		};
	};
	class MaleIndianLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_Raghu_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_raghu.rvmat"
		};
	};
	class MaleDeanLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_dean_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_dean.rvmat"
		};
	};
	class MaleJazzLegsNew: MaleLegsNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_matt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_m_matt.rvmat"
		};
	};
	class FemaleLegs: MaleLegsNew
	{
		model="\DZ\characters\pants\legs_f.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_white01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_white_01.rvmat"
		};
	};
	class FemaleAsianLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_asian01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_asian_01.rvmat"
		};
	};
	class FemaleAfricanLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_african01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_african_01.rvmat"
		};
	};
	class FemaleLatinoLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_latino01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_latino_01.rvmat"
		};
	};
	class FemaleIndianLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_Sita_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_sita.rvmat"
		};
	};
	class FemaleKamilaLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_Kamila_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_kamila.rvmat"
		};
	};
	class FemaleHenrietLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_henriet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_henriet.rvmat"
		};
	};
	class FemaleJanaZLegs: FemaleLegs
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_JanaZ_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_janaz.rvmat"
		};
	};
	class BottomwearBase;
	class JeansBase: BottomwearBase
	{
		scope=0;
		absorbency=0.69999999;
		heatIsolation=2.5999999;
		displayName="Jeans";
		descriptionShort="Denim trousers, also known as jeans, are a type of casual clothing made popular in the 1950s.";
		model="\DZ\characters\pants\jeans_ground.p3d";
		lootTag[]=
		{
			"Civilian"
		};
		itemSize[]={2,1};
		itemsCargoSize[]={4,3};
		quickBarBonus=1;
		repairableWith=2;
		weight=470;
		class ClothingTypes
		{
			male="\DZ\characters\pants\jeans_m.p3d";
			female="\DZ\characters\pants\jeans_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\jeans.rvmat",
				"DZ\characters\pants\data\jeans_damage.rvmat",
				"DZ\characters\pants\data\jeans_destruct.rvmat",
				"DZ\characters\pants\data\Jeans_m_grd.rvmat",
				"DZ\characters\pants\data\Jeans_m_grd_damage.rvmat",
				"DZ\characters\pants\data\Jeans_m_grd_destruct.rvmat",
				"DZ\characters\pants\data\Jeans_f.rvmat",
				"DZ\characters\pants\data\Jeans_f_damage.rvmat",
				"DZ\characters\pants\data\Jeans_f_destruct.rvmat",
				"DZ\characters\pants\data\Jeans_f_grd.rvmat",
				"DZ\characters\pants\data\Jeans_f_grd_damage.rvmat",
				"DZ\characters\pants\data\Jeans_f_grd_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.2;
		};
	};
	class Jeans_Black: JeansBase
	{
		scope=2;
		displayName="Black Jeans";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\Jeans_m_grd_Black_co.paa",
			"DZ\characters\pants\data\Jeans_Black_co.paa",
			"DZ\characters\pants\data\Jeans_f_Black_co.paa"
		};
	};
	class Jeans_Blue: JeansBase
	{
		scope=2;
		displayName="Blue Jeans";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\Jeans_m_grd_Blue_co.paa",
			"DZ\characters\pants\data\Jeans_Blue_co.paa",
			"DZ\characters\pants\data\Jeans_f_Blue_co.paa"
		};
	};
	class Jeans_Brown: JeansBase
	{
		scope=2;
		displayName="Brown Jeans";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\Jeans_m_grd_Brown_co.paa",
			"DZ\characters\pants\data\Jeans_Brown_co.paa",
			"DZ\characters\pants\data\Jeans_f_Brown_co.paa"
		};
	};
	class Jeans_Green: JeansBase
	{
		scope=2;
		displayName="Green Jeans";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\Jeans_m_grd_Green_co.paa",
			"DZ\characters\pants\data\Jeans_Green_co.paa",
			"DZ\characters\pants\data\Jeans_f_Green_co.paa"
		};
	};
	class Jeans_Grey: JeansBase
	{
		scope=2;
		displayName="Grey Jeans";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\Jeans_m_grd_Grey_co.paa",
			"DZ\characters\pants\data\Jeans_Grey_co.paa",
			"DZ\characters\pants\data\Jeans_f_Grey_co.paa"
		};
	};
	class Jeans_BlueDark: JeansBase
	{
		scope=2;
		displayName="Dark Blue Jeans";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Jeans_m_grd_bluedark_co.paa",
			"\dz\characters\pants\data\Jeans_bluedark_co.paa",
			"\dz\characters\pants\data\Jeans_f_bluedark_co.paa"
		};
	};
	class CargoPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.60000002;
		heatIsolation=2.8;
		displayName="Cargo Pants";
		descriptionShort="Loosely cut pants suitable for tough work in the outdoors. Distinguishable by a multitude of pockets on each leg and includes a black nylon belt.";
		model="\DZ\characters\pants\cargoPants_g.p3d";
		lootTag[]=
		{
			"Work",
			"Military",
			"Military_west",
			"Military_east",
			"Fishing"
		};
		itemSize[]={2,1};
		itemsCargoSize[]={4,5};
		quickBarBonus=2;
		weight=530;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\cargoPants_m.p3d";
			female="\DZ\characters\pants\cargoPants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\CargoPants.rvmat",
				"DZ\characters\pants\data\CargoPants_damage.rvmat",
				"DZ\characters\pants\data\CargoPants_destruct.rvmat",
				"DZ\characters\pants\data\CargoPants_g.rvmat",
				"DZ\characters\pants\data\CargoPants_g_damage.rvmat",
				"DZ\characters\pants\data\CargoPants_g_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class CargoPants_Beige: CargoPantsBase
	{
		scope=2;
		displayName="Beige Cargo Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CargoPants_g_Beige_co.paa",
			"DZ\characters\pants\data\CargoPants_Beige_co.paa",
			"DZ\characters\pants\data\CargoPants_Beige_co.paa"
		};
	};
	class CargoPants_Black: CargoPantsBase
	{
		scope=2;
		displayName="Black Cargo Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CargoPants_g_Black_co.paa",
			"DZ\characters\pants\data\CargoPants_Black_co.paa",
			"DZ\characters\pants\data\CargoPants_Black_co.paa"
		};
	};
	class CargoPants_Blue: CargoPantsBase
	{
		scope=2;
		displayName="Blue Cargo Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CargoPants_g_Blue_co.paa",
			"DZ\characters\pants\data\CargoPants_Blue_co.paa",
			"DZ\characters\pants\data\CargoPants_Blue_co.paa"
		};
	};
	class CargoPants_Green: CargoPantsBase
	{
		scope=2;
		displayName="Green Cargo Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CargoPants_g_Green_co.paa",
			"DZ\characters\pants\data\CargoPants_Green_co.paa",
			"DZ\characters\pants\data\CargoPants_Green_co.paa"
		};
	};
	class CargoPants_Grey: CargoPantsBase
	{
		scope=2;
		displayName="Grey Cargo Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CargoPants_g_Grey_co.paa",
			"DZ\characters\pants\data\CargoPants_Grey_co.paa",
			"DZ\characters\pants\data\CargoPants_Grey_co.paa"
		};
	};
	class TTSKO_pantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.60000002;
		heatIsolation=2.8;
		displayName="TTsKO Pants";
		lootTag[]=
		{
			"Military",
			"Military_west",
			"Military_east"
		};
		model="\DZ\characters\pants\ttsko_pants_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={5,5};
		quickBarBonus=2;
		weight=400;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\ttsko_pants_m.p3d";
			female="\DZ\characters\pants\ttsko_pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\ttsko_pants.rvmat",
				"DZ\characters\pants\data\ttsko_pants_damage.rvmat",
				"DZ\characters\pants\data\ttsko_pants_destruct.rvmat",
				"DZ\characters\pants\data\ttsko_pants_g.rvmat",
				"DZ\characters\pants\data\ttsko_pants_g_damage.rvmat",
				"DZ\characters\pants\data\ttsko_pants_g_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.15000001;
		};
	};
	class ttsko_pants_Beige: TTSKO_pantsBase
	{
		scope=2;
		displayName="TTsKO Pants";
		descriptionShort="Tricolour camouflage created for the Soviet military, features several deep cargo pockets.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\TTsKO_Pants_g_camo_co.paa",
			"\dz\characters\pants\data\TTsKO_Pants_camo_co.paa",
			"\dz\characters\pants\data\TTsKO_Pants_camo_co.paa"
		};
	};
	class HunterPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.60000002;
		heatIsolation=3;
		displayName="Hunter pants";
		descriptionShort="Durable pants with big pockets, designed for prolonged periods of time spent outdoors. The camouflage pattern makes for ideal hunting outfit.";
		model="\DZ\characters\pants\HunterPants_g.p3d";
		lootTag[]=
		{
			"Hunting",
			"Fishing"
		};
		itemSize[]={2,1};
		itemsCargoSize[]={5,5};
		quickBarBonus=2;
		weight=630;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\HunterPants_m.p3d";
			female="\DZ\characters\pants\HunterPants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\HunterPants.rvmat",
				"DZ\characters\pants\data\HunterPants_damage.rvmat",
				"DZ\characters\pants\data\HunterPants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.15000001;
		};
	};
	class HunterPants_Autumn: HunterPantsBase
	{
		scope=2;
		displayName="Autumn Hunter Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\HunterPants_Autumn_co.paa",
			"DZ\characters\pants\data\HunterPants_Autumn_co.paa",
			"DZ\characters\pants\data\HunterPants_Autumn_co.paa"
		};
	};
	class HunterPants_Brown: HunterPantsBase
	{
		scope=2;
		displayName="Brown Hunter Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\HunterPants_Brown_co.paa",
			"DZ\characters\pants\data\HunterPants_Brown_co.paa",
			"DZ\characters\pants\data\HunterPants_Brown_co.paa"
		};
	};
	class HunterPants_Spring: HunterPantsBase
	{
		scope=2;
		displayName="Spring Hunter Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\HunterPants_Spring_co.paa",
			"DZ\characters\pants\data\HunterPants_Spring_co.paa",
			"DZ\characters\pants\data\HunterPants_Spring_co.paa"
		};
	};
	class HunterPants_Summer: HunterPantsBase
	{
		scope=2;
		displayName="Summer Hunter Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\HunterPants_Summer_co.paa",
			"DZ\characters\pants\data\HunterPants_Summer_co.paa",
			"DZ\characters\pants\data\HunterPants_Summer_co.paa"
		};
	};
	class HunterPants_Winter: HunterPantsBase
	{
		scope=2;
		displayName="Winter Hunter Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\HunterPants_Winter_co.paa",
			"DZ\characters\pants\data\HunterPants_Winter_co.paa",
			"DZ\characters\pants\data\HunterPants_Winter_co.paa"
		};
	};
	class CanvasPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.60000002;
		heatIsolation=2.5999999;
		displayName="Canvas Pants";
		descriptionShort="Cheap, slightly unfashionable but extremely comfortable pants.";
		lootTag[]=
		{
			"Civilian",
			"Camping"
		};
		model="\DZ\characters\pants\CanvasPants_Long_g.p3d";
		weight=370;
		itemSize[]={2,1};
		ragQuantity=3;
		itemsCargoSize[]={3,2};
		quickBarBonus=1;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\CanvasPants_Long_m.p3d";
			female="\DZ\characters\pants\CanvasPants_Long_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\CanvasPants.rvmat",
				"DZ\characters\pants\data\CanvasPants_damage.rvmat",
				"DZ\characters\pants\data\CanvasPants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.050000001;
		};
	};
	class CanvasPants_Beige: CanvasPantsBase
	{
		scope=2;
		displayName="Beige Canvas Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CanvasPants_Beige_co.paa",
			"DZ\characters\pants\data\CanvasPants_Beige_co.paa",
			"DZ\characters\pants\data\CanvasPants_Beige_co.paa"
		};
	};
	class CanvasPants_Blue: CanvasPantsBase
	{
		scope=2;
		displayName="Blue Canvas Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CanvasPants_Blue_co.paa",
			"DZ\characters\pants\data\CanvasPants_Blue_co.paa",
			"DZ\characters\pants\data\CanvasPants_Blue_co.paa"
		};
	};
	class CanvasPants_Grey: CanvasPantsBase
	{
		scope=2;
		displayName="Grey Canvas Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CanvasPants_Grey_co.paa",
			"DZ\characters\pants\data\CanvasPants_Grey_co.paa",
			"DZ\characters\pants\data\CanvasPants_Grey_co.paa"
		};
	};
	class CanvasPants_Red: CanvasPantsBase
	{
		scope=2;
		displayName="Red Canvas Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CanvasPants_Red_co.paa",
			"DZ\characters\pants\data\CanvasPants_Red_co.paa",
			"DZ\characters\pants\data\CanvasPants_Red_co.paa"
		};
	};
	class CanvasPants_Violet: CanvasPantsBase
	{
		scope=2;
		displayName="Violet Canvas Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\CanvasPants_Violet_co.paa",
			"DZ\characters\pants\data\CanvasPants_Violet_co.paa",
			"DZ\characters\pants\data\CanvasPants_Violet_co.paa"
		};
	};
	class CanvasPants_Midi_Base: CanvasPantsBase
	{
		scope=0;
		displayName="Canvas Pants Short";
		heatIsolation=2.3;
		descriptionShort="Cheap, slightly unfashionable but very comfortable short pants.";
		model="\DZ\characters\pants\CanvasPants_Midi_g.p3d";
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\CanvasPants_Midi_m.p3d";
			female="\DZ\characters\pants\CanvasPants_Midi_f.p3d";
		};
	};
	class CanvasPants_Midi_Beige: CanvasPants_Midi_Base
	{
		scope=2;
		displayName="Canvas Pants Short (beige)";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\CanvasPants_beige_co.paa",
			"\dz\characters\pants\data\CanvasPants_beige_co.paa",
			"\dz\characters\pants\data\CanvasPants_beige_co.paa"
		};
	};
	class CanvasPants_Midi_blue: CanvasPants_Midi_Base
	{
		scope=2;
		displayName="Canvas Pants Short (blue)";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\CanvasPants_blue_co.paa",
			"\dz\characters\pants\data\CanvasPants_blue_co.paa",
			"\dz\characters\pants\data\CanvasPants_blue_co.paa"
		};
	};
	class CanvasPants_Midi_grey: CanvasPants_Midi_Base
	{
		scope=2;
		displayName="Canvas Pants Short (grey)";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\CanvasPants_grey_co.paa",
			"\dz\characters\pants\data\CanvasPants_grey_co.paa",
			"\dz\characters\pants\data\CanvasPants_grey_co.paa"
		};
	};
	class CanvasPants_Midi_red: CanvasPants_Midi_Base
	{
		scope=2;
		displayName="Canvas Pants Short (red)";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\CanvasPants_red_co.paa",
			"\dz\characters\pants\data\CanvasPants_red_co.paa",
			"\dz\characters\pants\data\CanvasPants_red_co.paa"
		};
	};
	class CanvasPants_Midi_violet: CanvasPants_Midi_Base
	{
		scope=2;
		displayName="Canvas Pants Short (violet)";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\CanvasPants_violet_co.paa",
			"\dz\characters\pants\data\CanvasPants_violet_co.paa",
			"\dz\characters\pants\data\CanvasPants_violet_co.paa"
		};
	};
	class TrackSuit_PantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.80000001;
		heatIsolation=2.8;
		displayName="$STR_ITEMS_TRACKSUITPANTS";
		descriptionShort="$STR_ITEMS_TRACKSUITPANTS_DESC";
		lootTag[]=
		{
			"Civilian",
			"Sport"
		};
		model="\DZ\characters\pants\TrackSuit_Pants_g.p3d";
		itemSize[]={2,1};
		ragQuantity=3;
		itemsCargoSize[]={2,2};
		quickBarBonus=1;
		weight=490;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\TrackSuit_Pants_m.p3d";
			female="\DZ\characters\pants\TrackSuit_Pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\TrackSuit_Pants.rvmat",
				"DZ\characters\pants\data\TrackSuit_Pants_damage.rvmat",
				"DZ\characters\pants\data\TrackSuit_Pants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.050000001;
		};
	};
	class TrackSuit_Pants_Black: TrackSuit_PantsBase
	{
		scope=2;
		displayName="Black Tracksuit Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Black_co.paa"
		};
	};
	class TrackSuit_Pants_Blue: TrackSuit_PantsBase
	{
		scope=2;
		displayName="Blue Tracksuit Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Blue_co.paa"
		};
	};
	class TrackSuit_Pants_Green: TrackSuit_PantsBase
	{
		scope=2;
		displayName="Green Tracksuit Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Green_co.paa"
		};
	};
	class TrackSuit_Pants_Red: TrackSuit_PantsBase
	{
		scope=2;
		displayName="Red Tracksuit Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_Red_co.paa"
		};
	};
	class TrackSuit_Pants_LightBlue: TrackSuit_PantsBase
	{
		scope=2;
		displayName="Light Blue Tracksuit Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa",
			"DZ\characters\pants\data\TrackSuit_Pants_LightBlue_co.paa"
		};
	};
	class Gorka_pantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.2;
		heatIsolation=3.2;
		displayName="Gorka Military Pants";
		lootTag[]=
		{
			"Military_east"
		};
		descriptionShort="Tactical pants used by the unit stationed at Gorka, Chernarus.";
		model="\DZ\characters\pants\gorka_pants_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={4,5};
		quickBarBonus=2;
		weight=400;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\gorka_pants_m.p3d";
			female="\DZ\characters\pants\gorka_pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\GorkaEPants.rvmat",
				"DZ\characters\pants\data\GorkaEPants_damage.rvmat",
				"DZ\characters\pants\data\GorkaEPants_destruct.rvmat",
				"DZ\characters\pants\data\GorkaEPants_dropped.rvmat",
				"DZ\characters\pants\data\GorkaEPants_dropped_damage.rvmat",
				"DZ\characters\pants\data\GorkaEPants_dropped_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class Gorka_pants_summer: Gorka_pantsBase
	{
		scope=2;
		displayName="Summer Camouflage Gorka Military Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\gorkapants_dropped_summer_CO.paa",
			"DZ\characters\pants\data\gorka_pants_summer_CO.paa",
			"DZ\characters\pants\data\gorka_pants_summer_CO.paa"
		};
	};
	class Gorka_pants_autumn: Gorka_pantsBase
	{
		scope=2;
		displayName="Autumn Camouflage Gorka Military Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\gorkapants_dropped_autumn_CO.paa",
			"DZ\characters\pants\data\gorka_pants_autumn_CO.paa",
			"DZ\characters\pants\data\gorka_pants_autumn_CO.paa"
		};
	};
	class Gorka_pants_flat: Gorka_pantsBase
	{
		scope=2;
		displayName="Flat Camouflage Gorka Military Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\gorkapants_dropped_flat_CO.paa",
			"DZ\characters\pants\data\gorka_pants_flat_CO.paa",
			"DZ\characters\pants\data\gorka_pants_flat_CO.paa"
		};
	};
	class Gorka_pants_PautRev: Gorka_pantsBase
	{
		scope=2;
		displayName="PautRev Camouflage Gorka Military Pants";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\gorkapants_dropped_PautRev_CO.paa",
			"DZ\characters\pants\data\gorka_pants_PautRev_CO.paa",
			"DZ\characters\pants\data\gorka_pants_PautRev_CO.paa"
		};
	};
	class Police_pants: BottomwearBase
	{
		scope=2;
		absorbency=0.60000002;
		heatIsolation=3.2;
		displayName="Chernarus Police Uniform Pants";
		lootTag[]=
		{
			"Police"
		};
		descriptionShort="Standard issue of Chernarus Police force uniform pants.";
		model="\DZ\characters\pants\PolicePants_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={4,3};
		quickBarBonus=1;
		weight=510;
		ragQuantity=3;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\PolicePants_m.p3d";
			female="\DZ\characters\pants\PolicePants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\PolicePants.rvmat",
				"DZ\characters\pants\data\PolicePants_damage.rvmat",
				"DZ\characters\pants\data\PolicePants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\pants\data\PolicePants_co.paa",
			"DZ\characters\pants\data\PolicePants_co.paa",
			"DZ\characters\pants\data\PolicePants_co.paa"
		};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class Police_pants_orel: TTSKO_pantsBase
	{
		scope=2;
		absorbency=0.1;
		heatIsolation=3.5999999;
		weight=520;
		displayName="OREL Unit Uniform Pants";
		lootTag[]=
		{
			"Police"
		};
		descriptionShort="Uniform Pants of the Chernarus OREL special police force unit";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\TTsKO_Pants_g_KamyshCamo_co.paa",
			"\dz\characters\pants\data\TTsKO_Pants_KamyshCamo_co.paa",
			"\dz\characters\pants\data\TTsKO_Pants_KamyshCamo_co.paa"
		};
	};
	class ParamedicPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.2;
		heatIsolation=2.8;
		displayName="Paramedic Pants";
		descriptionShort="Standard issue of Chernarus Police paramedic uniform pants.";
		model="\DZ\characters\pants\ParaMedic_Pants_g.p3d";
		itemSize[]={2,1};
		lootTag[]=
		{
			"Medic"
		};
		itemsCargoSize[]={3,4};
		quickBarBonus=1;
		weight=390;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\ParaMedic_Pants_m.p3d";
			female="\DZ\characters\pants\ParaMedic_Pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\Paramedic_Pants.rvmat",
				"DZ\characters\pants\data\Paramedic_Pants_damage.rvmat",
				"DZ\characters\pants\data\Paramedic_Pants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class ParamedicPantsBlue: ParamedicPantsBase
	{
		scope=2;
		displayName="Blue Paramedic Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Paramedic_Pants_blue_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_blue_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_blue_co.paa"
		};
	};
	class ParamedicPantsCrimson: ParamedicPantsBase
	{
		scope=2;
		displayName="Crimson Paramedic Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_crimson_co.paa"
		};
	};
	class ParamedicPantsGreen: ParamedicPantsBase
	{
		scope=2;
		displayName="Green Paramedic Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Paramedic_Pants_green_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_green_co.paa",
			"\dz\characters\pants\data\Paramedic_Pants_green_co.paa"
		};
	};
	class FirefightersPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=3;
		displayName="Fire-fighters Pants";
		descriptionShort="Standard issue of Chernarus Fire-fighting force uniform pants. Protects wearer from heat and water.";
		model="\DZ\characters\pants\Firefighter_Pants_g.p3d";
		itemSize[]={4,4};
		lootTag[]=
		{
			"Firefighters"
		};
		itemsCargoSize[]={2,2};
		quickBarBonus=1;
		weight=2500;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\Firefighter_Pants_m.p3d";
			female="\DZ\characters\pants\Firefighter_Pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\Firefighter_Pants.rvmat",
				"DZ\characters\pants\data\Firefighter_Pants_damage.rvmat",
				"DZ\characters\pants\data\Firefighter_Pants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class FirefightersPants_Beige: FirefightersPantsBase
	{
		scope=2;
		displayName="Beige Fire-fighters Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Firefighter_pants_beige_co.paa",
			"\dz\characters\pants\data\Firefighter_pants_beige_co.paa",
			"\dz\characters\pants\data\Firefighter_pants_beige_co.paa"
		};
	};
	class FirefightersPants_Black: FirefightersPantsBase
	{
		scope=2;
		displayName="Black Fire-fighters Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Firefighter_pants_black_co.paa",
			"\dz\characters\pants\data\Firefighter_pants_black_co.paa",
			"\dz\characters\pants\data\Firefighter_pants_black_co.paa"
		};
	};
	class PrisonUniformPants: BottomwearBase
	{
		scope=2;
		absorbency=0.60000002;
		heatIsolation=2;
		displayName="Chernarus Prisoners Uniform Pants";
		descriptionShort="Standard issue of Chernarus prisoners uniform pants";
		model="\DZ\characters\pants\prison_pants_g.p3d";
		weight=310;
		lootTag[]=
		{
			"Prison"
		};
		itemSize[]={2,1};
		itemsCargoSize[]={2,2};
		quickBarBonus=1;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\prison_pants_m.p3d";
			female="\DZ\characters\pants\prison_pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\prison_pants.rvmat",
				"DZ\characters\pants\data\prison_pants_damage.rvmat",
				"DZ\characters\pants\data\prison_pants_destruct.rvmat",
				"DZ\characters\pants\data\prison_pants_g.rvmat",
				"DZ\characters\pants\data\prison_pants_g_damage.rvmat",
				"DZ\characters\pants\data\prison_pants_g_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageArmor
		{
			bleed=0.1;
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\prison_pants_g_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa"
		};
	};
	class Pants_LeatherPantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.69999999;
		heatIsolation=2.5999999;
		displayName="Leather Pants";
		descriptionShort="Denim trousers, also known as jeans, are a type of casual clothing made popular in the 1950s.";
		model="\DZ\characters\pants\Pants_LeatherPants_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={3,2};
		quickBarBonus=1;
		weight=590;
		repairableWith=3;
		class ClothingTypes
		{
			male="\DZ\characters\pants\Pants_LeatherPants_m.p3d";
			female="\DZ\characters\pants\Pants_LeatherPants_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\Paramedic_Pants.rvmat",
				"DZ\characters\pants\data\Paramedic_Pants_damage.rvmat",
				"DZ\characters\pants\data\Paramedic_Pants_destruct.rvmat"
			};
		};
		class DamageArmor
		{
			bleed=0.2;
		};
	};
	class Pants_LeatherPants_Natural: Pants_LeatherPantsBase
	{
		scope=1;
		displayName="Natural Leather Pants";
		color="Natural";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\pants\data\Pants_LeatherPants_Natural.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Natural_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Natural_destruct.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Natural.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Natural_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Natural_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\pants\data\Pants_LeatherPants_Natural.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Natural.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Natural.rvmat"
		};
	};
	class Pants_LeatherPants_Beige: Pants_LeatherPantsBase
	{
		scope=1;
		displayName="Beige Leather Pants";
		color="Beige";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\pants\data\Pants_LeatherPants_Beige.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Beige_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Beige_destruct.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Beige.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Beige_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Beige_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\pants\data\Pants_LeatherPants_Beige.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Beige.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Beige.rvmat"
		};
	};
	class Pants_LeatherPants_Brown: Pants_LeatherPantsBase
	{
		scope=1;
		displayName="Brown Leather Pants";
		color="Brown";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\pants\data\Pants_LeatherPants_Brown.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Brown_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Brown_destruct.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Brown.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Brown_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Brown_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\pants\data\Pants_LeatherPants_Brown.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Brown.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Brown.rvmat"
		};
	};
	class Pants_LeatherPants_Black: Pants_LeatherPantsBase
	{
		scope=1;
		displayName="Black Leather Pants";
		color="Black";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\pants\data\Pants_LeatherPants_Black.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Black_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_Black_destruct.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Black.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Black_damage.rvmat",
				"dz\characters\pants\data\Pants_LeatherPants_g_Black_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\pants\data\Pants_LeatherPants_Black.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Black.rvmat",
			"dz\characters\pants\data\Pants_LeatherPants_Black.rvmat"
		};
	};
	class MedicalScrubs_PantsBase: BottomwearBase
	{
		scope=0;
		absorbency=0.89999998;
		heatIsolation=3;
		displayName="Medical Scrubs Pants";
		descriptionShort="Scrubs are the shirts and trousers or gowns worn by surgeons, midwives and other operating room personnel when sterilizing themselves, or 'scrubbing in', before surgery. They are designed to be simple with minimal places for contaminants to hide, easy to launder, and cheap to replace if damaged or stained irreparably.";
		model="\DZ\characters\pants\MedicalScrubs_Pants_g.p3d";
		itemSize[]={1,1};
		lootTag[]=
		{
			"Medic"
		};
		itemsCargoSize[]={2,3};
		quickBarBonus=1;
		weight=500;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\MedicalScrubs_Pants_m.p3d";
			female="\DZ\characters\pants\MedicalScrubs_Pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\MedicalScrubs_Pants.rvmat",
				"DZ\characters\pants\data\MedicalScrubs_Pants_damage.rvmat",
				"DZ\characters\pants\data\MedicalScrubs_Pants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class MedicalScrubs_Pants_Blue: MedicalScrubs_PantsBase
	{
		scope=2;
		displayName="Blue Medical Scrubs Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_blue_co.paa"
		};
	};
	class MedicalScrubs_Pants_Green: MedicalScrubs_PantsBase
	{
		scope=2;
		displayName="Green Medical Scrubs Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_green_co.paa"
		};
	};
	class MedicalScrubs_Pants_White: MedicalScrubs_PantsBase
	{
		scope=2;
		displayName="White Medical Scrubs Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa",
			"\dz\characters\pants\data\MedicalScrubs_Pants_white_co.paa"
		};
	};
	class USMC_PantsBase: BottomwearBase
	{
		scope=1;
		absorbency=0.15000001;
		heatIsolation=3.4000001;
		displayName="USMC Pants";
		descriptionShort="U.S. Marine Corps' pants made according to the MCCU specifications in Marpat USMC Digital Woodland camouflage.";
		model="\dz\characters\pants\USMC_pants_g.p3d";
		itemSize[]={2,1};
		lootTag[]=
		{
			"Military_west"
		};
		itemsCargoSize[]={5,5};
		quickBarBonus=2;
		weight=872;
		repairableWith=2;
		class ClothingTypes
		{
			male="\dz\characters\pants\USMC_pants_m.p3d";
			female="\dz\characters\pants\USMC_pants_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\USMC_Pants.rvmat",
				"DZ\characters\pants\data\USMC_Pants_damage.rvmat",
				"DZ\characters\pants\data\USMC_Pants_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			bleed=0.15000001;
		};
	};
	class USMC_Pants_Desert: USMC_PantsBase
	{
		scope=2;
		displayName="USMC Pants Desert";
		descriptionShort="U.S. Marine Corps' pants made according to the MCCU specifications in Marpat USMC Digital Desert camouflage.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa",
			"\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa",
			"\dz\characters\pants\data\USMC_Pants_MarpatDesert_co.paa"
		};
	};
	class USMC_Pants_Woodland: USMC_PantsBase
	{
		scope=2;
		displayName="USMC Pants Woodland";
		descriptionShort="U.S. Marine Corps' pants made according to the MCCU specifications in Marpat USMC Digital Woodland camouflage.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa",
			"\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa",
			"\dz\characters\pants\data\USMC_Pants_MarpatWoodland_co.paa"
		};
	};
	class Slacks_PantsBase: BottomwearBase
	{
		scope=0;
		displayName="Slacks Pants";
		descriptionShort="Pants designed for more formal meetings than casual trousers.";
		model="\DZ\characters\pants\Slacks_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={2,2};
		quickBarBonus=1;
		lootTag[]=
		{
			"Civilian"
		};
		weight=184;
		absorbency=0.80000001;
		heatIsolation=2.8;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\pants\Slacks_m.p3d";
			female="\DZ\characters\pants\Slacks_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\pants\data\Slacks.rvmat",
				"DZ\characters\pants\data\Slacks_damage.rvmat",
				"DZ\characters\pants\data\Slacks_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class Slacks_Pants_Beige: Slacks_PantsBase
	{
		scope=2;
		displayName="Beige Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_beige_co.paa",
			"\dz\characters\pants\data\Slacks_beige_co.paa",
			"\dz\characters\pants\data\Slacks_beige_co.paa"
		};
	};
	class Slacks_Pants_Black: Slacks_PantsBase
	{
		scope=2;
		displayName="Black Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_black_co.paa",
			"\dz\characters\pants\data\Slacks_black_co.paa",
			"\dz\characters\pants\data\Slacks_black_co.paa"
		};
	};
	class Slacks_Pants_Blue: Slacks_PantsBase
	{
		scope=2;
		displayName="Blue Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_blue_co.paa",
			"\dz\characters\pants\data\Slacks_blue_co.paa",
			"\dz\characters\pants\data\Slacks_blue_co.paa"
		};
	};
	class Slacks_Pants_Brown: Slacks_PantsBase
	{
		scope=2;
		displayName="Brown Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_brown_co.paa",
			"\dz\characters\pants\data\Slacks_brown_co.paa",
			"\dz\characters\pants\data\Slacks_brown_co.paa"
		};
	};
	class Slacks_Pants_DarkGrey: Slacks_PantsBase
	{
		scope=2;
		displayName="Dark grey Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_darkGrey_co.paa",
			"\dz\characters\pants\data\Slacks_darkGrey_co.paa",
			"\dz\characters\pants\data\Slacks_darkGrey_co.paa"
		};
	};
	class Slacks_Pants_Khaki: Slacks_PantsBase
	{
		scope=2;
		displayName="Khaki Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_khaki_co.paa",
			"\dz\characters\pants\data\Slacks_khaki_co.paa",
			"\dz\characters\pants\data\Slacks_khaki_co.paa"
		};
	};
	class Slacks_Pants_LightGrey: Slacks_PantsBase
	{
		scope=2;
		displayName="Light grey Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_LightGrey_co.paa",
			"\dz\characters\pants\data\Slacks_LightGrey_co.paa",
			"\dz\characters\pants\data\Slacks_LightGrey_co.paa"
		};
	};
	class Slacks_Pants_White: Slacks_PantsBase
	{
		scope=2;
		displayName="White Slacks Pants";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_white_co.paa",
			"\dz\characters\pants\data\Slacks_white_co.paa",
			"\dz\characters\pants\data\Slacks_white_co.paa"
		};
	};
	class MaleLegsAbove: MaleLegsNew
	{
		displayName="Underwear shorts above";
		model="\dz\characters\pants\legs_m_above0.p3d";
	};
	class JeansAbove: JeansBase
	{
		skeletonName="DayzTemporarySkeleton";
		scope=2;
		displayName="Jeans above male model only so far)";
		class ClothingTypes
		{
			male="\DZ\characters\pants\jeans_m_above0.p3d";
			female="\DZ\characters\pants\jeans_m_above0.p3d";
		};
	};
};
