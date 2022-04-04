class CfgPatches
{
	class DZ_Characters_Shoes
	{
		units[]=
		{
			"athleticShoes",
			"HikingBoots",
			"MaleFeet",
			"FemaleFeet"
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
	class FootwearBase;
	class InventoryBase;
	class MaleFeetNew: InventoryBase
	{
		scope=1;
		displayName="Bare feet new";
		model="\DZ\characters\shoes\feet_new_m.p3d";
		inventorySlot="Feet";
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
			"DZ\characters\heads\data\hhl_m_white01_medium_002.rvmat"
		};
	};
	class MaleAsianFeetNew: MaleFeetNew
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
	class MaleAfricanFeetNew: MaleFeetNew
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
	class MaleLatinoFeetNew: MaleFeetNew
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
	class MaleIndianFeet: MaleFeetNew
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
	class MaleDeanFeet: MaleFeetNew
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
	class MaleJazzFeet: MaleFeetNew
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
	class FemaleFeet: MaleFeetNew
	{
		model="\DZ\characters\shoes\feet_f.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_white01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_white_01.rvmat"
		};
	};
	class FemaleAsianFeet: FemaleFeet
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
	class FemaleAfricanFeet: FemaleFeet
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
	class FemaleLatinoFeet: FemaleFeet
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
	class FemaleIndianFeet: FemaleFeet
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
	class FemaleKamilaFeet: FemaleFeet
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
	class FemaleHenrietFeet: FemaleFeet
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
	class FemaleJanaZFeet: FemaleFeet
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
	class AthleticShoes_Base: FootwearBase
	{
		scope=0;
		armor=8;
		absorbency=0.5;
		heatIsolation=3.9000001;
		displayName="Athletic Shoes";
		descriptionShort="An all-terrain shoe with a durable rubber outsole and a lightweight synthetic fabric/mesh upper. Designed to protect the feet during everyday activities.";
		lootTag[]=
		{
			"Civilian",
			"City",
			"Sport"
		};
		model="\DZ\characters\shoes\athleticShoes_ground.p3d";
		weight=330;
		itemSize[]={2,1};
		repairableWith=3;
		durability=0.2;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\athleticShoes_m.p3d";
			female="\DZ\characters\shoes\athleticShoes_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\athleticShoes.rvmat",
				"DZ\characters\shoes\data\athleticShoes_damage.rvmat",
				"DZ\characters\shoes\data\athleticShoes_destruct.rvmat"
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
			"\dz\characters\shoes\data\athleticShoes_blue_co.paa",
			"\dz\characters\shoes\data\athleticShoes_blue_co.paa",
			"\dz\characters\shoes\data\athleticShoes_blue_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class AthleticShoes_Black: AthleticShoes_Base
	{
		scope=2;
		displayName="Athletic Shoes (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\AthleticShoes_Black_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Black_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Black_co.paa"
		};
	};
	class AthleticShoes_Blue: AthleticShoes_Base
	{
		scope=2;
		displayName="Athletic Shoes (Blue)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\AthleticShoes_Blue_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Blue_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Blue_co.paa"
		};
	};
	class AthleticShoes_Brown: AthleticShoes_Base
	{
		scope=2;
		displayName="Athletic Shoes (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\AthleticShoes_Brown_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Brown_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Brown_co.paa"
		};
	};
	class AthleticShoes_Green: AthleticShoes_Base
	{
		scope=2;
		displayName="Athletic Shoes (Green)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\AthleticShoes_Green_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Green_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Green_co.paa"
		};
	};
	class AthleticShoes_Grey: AthleticShoes_Base
	{
		scope=2;
		displayName="Athletic Shoes (Grey)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\AthleticShoes_Grey_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Grey_co.paa",
			"DZ\characters\shoes\data\AthleticShoes_Grey_co.paa"
		};
	};
	class HikingBoots_Base: FootwearBase
	{
		scope=0;
		armor=20;
		absorbency=0.1;
		heatIsolation=4.1999998;
		displayName="Hiking boots";
		descriptionShort="A highly durable leather lined, water resistant boot specifically constructed to protect the feet and ankles from damage or strain during all types of outdoor activities.";
		model="\DZ\characters\shoes\hikingBoots_ground.p3d";
		lootTag[]=
		{
			"Civilian",
			"Camping"
		};
		itemSize[]={2,2};
		weight=400;
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\hikingBoots_m.p3d";
			female="\DZ\characters\shoes\hikingBoots_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\hikingBoots.rvmat",
				"DZ\characters\shoes\data\hikingBoots_damage.rvmat",
				"DZ\characters\shoes\data\hikingBoots_destruct.rvmat"
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
			"\dz\characters\shoes\data\hikingBoots_brown_co.paa",
			"\dz\characters\shoes\data\hikingBoots_brown_co.paa",
			"\dz\characters\shoes\data\hikingBoots_brown_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class HikingBoots_Brown: HikingBoots_Base
	{
		scope=2;
		displayName="Hiking boots (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Brown_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Brown_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Brown_co.paa"
		};
	};
	class HikingBoots_Black: HikingBoots_Base
	{
		scope=2;
		displayName="Hiking boots (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Black_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Black_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Black_co.paa"
		};
	};
	class HikingBoots_Low_Base: FootwearBase
	{
		scope=0;
		armor=16;
		absorbency=0.25;
		heatIsolation=4;
		weight=270;
		displayName="Low Hiking boots";
		lootTag[]=
		{
			"Civilian",
			"Camping"
		};
		descriptionShort="A versatile boot featuring a toe guard, a hard-wearing rubber outsole and a lightweight upper making it the middle ground between a hiking boot and an athletic shoe.";
		model="\DZ\characters\shoes\hikingBoots_low_ground.p3d";
		itemSize[]={2,1};
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\hikingBoots_low_m.p3d";
			female="\DZ\characters\shoes\hikingBoots_low_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\hikingBoots_low.rvmat",
				"DZ\characters\shoes\data\hikingBoots_low_damage.rvmat",
				"DZ\characters\shoes\data\hikingBoots_low_destruct.rvmat"
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
			"\DZ\characters\shoes\data\HikingBoots_Low_beige_co.paa",
			"\DZ\characters\shoes\data\HikingBoots_Low_beige_co.paa",
			"\DZ\characters\shoes\data\HikingBoots_Low_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class HikingBoots_Low_Beige: HikingBoots_Low_Base
	{
		scope=2;
		displayName="Low Hiking Boots (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Low_Beige_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Beige_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Beige_co.paa"
		};
	};
	class HikingBoots_Low_Black: HikingBoots_Low_Base
	{
		scope=2;
		displayName="Low Hiking Boots (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Low_Black_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Black_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Black_co.paa"
		};
	};
	class HikingBoots_Low_Blue: HikingBoots_Low_Base
	{
		scope=2;
		displayName="Low Hiking Boots (Blue)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Low_Blue_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Blue_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Blue_co.paa"
		};
	};
	class HikingBoots_Low_Grey: HikingBoots_Low_Base
	{
		scope=2;
		displayName="Low Hiking Boots (Grey)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\HikingBoots_Low_Grey_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Grey_co.paa",
			"DZ\characters\shoes\data\HikingBoots_Low_Grey_co.paa"
		};
	};
	class Wellies_Base: FootwearBase
	{
		scope=0;
		armor=12;
		displayName="Wellies";
		heatIsolation=5;
		descriptionShort="Large and hard-wearing boots made from rubber that reach just below knee, designed predominantly to protect the feet during damp weather conditions.";
		model="\DZ\characters\shoes\wellies_ground.p3d";
		lootTag[]=
		{
			"Work",
			"Farm",
			"Firefighters",
			"Fishing"
		};
		itemSize[]={2,3};
		weight=700;
		repairableWith=0;
		durability=0.5;
		absorbency=0;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\wellies_m.p3d";
			female="\DZ\characters\shoes\wellies_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\wellies.rvmat",
				"DZ\characters\shoes\data\wellies_damage.rvmat",
				"DZ\characters\shoes\data\wellies_destruct.rvmat"
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
			"\DZ\characters\shoes\data\wellies_black_co.paa",
			"\DZ\characters\shoes\data\wellies_black_co.paa",
			"\DZ\characters\shoes\data\wellies_black_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class Wellies_Black: Wellies_Base
	{
		scope=2;
		displayName="Wellies (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\Wellies_Black_co.paa",
			"DZ\characters\shoes\data\Wellies_Black_co.paa",
			"DZ\characters\shoes\data\Wellies_Black_co.paa"
		};
	};
	class Wellies_Brown: Wellies_Base
	{
		scope=2;
		displayName="Wellies (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\Wellies_Brown_co.paa",
			"DZ\characters\shoes\data\Wellies_Brown_co.paa",
			"DZ\characters\shoes\data\Wellies_Brown_co.paa"
		};
	};
	class Wellies_Green: Wellies_Base
	{
		scope=2;
		displayName="Wellies (Green)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\Wellies_Green_co.paa",
			"DZ\characters\shoes\data\Wellies_Green_co.paa",
			"DZ\characters\shoes\data\Wellies_Green_co.paa"
		};
	};
	class Wellies_Grey: Wellies_Base
	{
		scope=2;
		displayName="Wellies (Grey)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\Wellies_Grey_co.paa",
			"DZ\characters\shoes\data\Wellies_Grey_co.paa",
			"DZ\characters\shoes\data\Wellies_Grey_co.paa"
		};
	};
	class WorkingBoots_Base: FootwearBase
	{
		scope=0;
		armor=16;
		absorbency=0.30000001;
		heatIsolation=4.1999998;
		weight=1100;
		displayName="Working boots";
		lootTag[]=
		{
			"Work",
			"Farm",
			"Firefighters"
		};
		descriptionShort="A durable leather boot, largely worn by industrial workers, that consists of a padded collar, a heavy-duty rubber outsole and a protective steel reinforcement in the toe.";
		itemSize[]={2,2};
		repairableWith=3;
		model="\DZ\characters\shoes\WorkingBoots_ground.p3d";
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\WorkingBoots_m.p3d";
			female="\DZ\characters\shoes\WorkingBoots_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\WorkingBoots.rvmat",
				"DZ\characters\shoes\data\WorkingBoots_damage.rvmat",
				"DZ\characters\shoes\data\WorkingBoots_destruct.rvmat"
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
			"\DZ\characters\shoes\data\WorkingBoots_beige_co.paa",
			"\DZ\characters\shoes\data\WorkingBoots_beige_co.paa",
			"\DZ\characters\shoes\data\WorkingBoots_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class WorkingBoots_Beige: WorkingBoots_Base
	{
		scope=2;
		displayName="Working Boots (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\WorkingBoots_Beige_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Beige_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Beige_co.paa"
		};
	};
	class WorkingBoots_Brown: WorkingBoots_Base
	{
		scope=2;
		displayName="Working Boots (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\WorkingBoots_Brown_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Brown_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Brown_co.paa"
		};
	};
	class WorkingBoots_Green: WorkingBoots_Base
	{
		scope=2;
		displayName="Working Boots (Green)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\WorkingBoots_Green_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Green_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Green_co.paa"
		};
	};
	class WorkingBoots_Grey: WorkingBoots_Base
	{
		scope=2;
		displayName="Working Boots (Grey)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\WorkingBoots_Grey_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Grey_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Grey_co.paa"
		};
	};
	class WorkingBoots_Yellow: WorkingBoots_Base
	{
		scope=2;
		displayName="Working Boots (Yellow)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\WorkingBoots_Yellow_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Yellow_co.paa",
			"DZ\characters\shoes\data\WorkingBoots_Yellow_co.paa"
		};
	};
	class JungleBoots_Base: FootwearBase
	{
		scope=0;
		armor=24;
		absorbency=0.1;
		heatIsolation=4.5999999;
		displayName="Jungle boots";
		descriptionShort="A type of combat boots designed for use in jungle warfare or in hot, wet and humid environments. They have vent holes in the instep and a canvas upper to aid in ventilation and drainage of moisture.";
		model="\DZ\characters\shoes\JungleBoots_ground.p3d";
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		itemSize[]={2,2};
		weight=1230;
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\JungleBoots_m.p3d";
			female="\DZ\characters\shoes\JungleBoots_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\JungleBoots.rvmat",
				"DZ\characters\shoes\data\JungleBoots_damage.rvmat",
				"DZ\characters\shoes\data\JungleBoots_destruct.rvmat"
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
			"\DZ\characters\shoes\data\JungleBoots_beige_co.paa",
			"\DZ\characters\shoes\data\JungleBoots_beige_co.paa",
			"\DZ\characters\shoes\data\JungleBoots_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class JungleBoots_Beige: JungleBoots_Base
	{
		scope=2;
		displayName="Jungle Boots (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JungleBoots_Beige_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Beige_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Beige_co.paa"
		};
	};
	class JungleBoots_Black: JungleBoots_Base
	{
		scope=2;
		displayName="Jungle Boots (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JungleBoots_Black_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Black_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Black_co.paa"
		};
	};
	class JungleBoots_Brown: JungleBoots_Base
	{
		scope=2;
		displayName="Jungle Boots (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JungleBoots_Brown_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Brown_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Brown_co.paa"
		};
	};
	class JungleBoots_Green: JungleBoots_Base
	{
		scope=2;
		displayName="Jungle Boots (Green)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JungleBoots_Green_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Green_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Green_co.paa"
		};
	};
	class JungleBoots_Olive: JungleBoots_Base
	{
		scope=2;
		displayName="Jungle Boots (Olive)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JungleBoots_Olive_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Olive_co.paa",
			"DZ\characters\shoes\data\JungleBoots_Olive_co.paa"
		};
	};
	class LeatherShoes_Base: FootwearBase
	{
		scope=0;
		armor=4;
		absorbency=0.40000001;
		heatIsolation=3.5;
		displayName="Leather shoes";
		lootTag[]=
		{
			"Civilian",
			"City"
		};
		descriptionShort="Fancy leather shoes suited for office work or social events. The leather sole provides good slide for dancing.";
		itemSize[]={2,1};
		weight=780;
		repairableWith=3;
		model="\DZ\characters\shoes\LeatherShoes_ground.p3d";
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\LeatherShoes_m.p3d";
			female="\DZ\characters\shoes\LeatherShoes_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\LeatherShoes.rvmat",
				"DZ\characters\shoes\data\LeatherShoes_damage.rvmat",
				"DZ\characters\shoes\data\LeatherShoes_destruct.rvmat"
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
			"\DZ\characters\shoes\data\LeatherShoes_beige_co.paa",
			"\DZ\characters\shoes\data\LeatherShoes_beige_co.paa",
			"\DZ\characters\shoes\data\LeatherShoes_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class LeatherShoes_Beige: LeatherShoes_Base
	{
		scope=2;
		displayName="Leather Shoes (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\LeatherShoes_Beige_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Beige_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Beige_co.paa"
		};
	};
	class LeatherShoes_Black: LeatherShoes_Base
	{
		scope=2;
		displayName="Leather Shoes (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\LeatherShoes_Black_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Black_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Black_co.paa"
		};
	};
	class LeatherShoes_Brown: LeatherShoes_Base
	{
		scope=2;
		displayName="Leather Shoes (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\LeatherShoes_Brown_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Brown_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Brown_co.paa"
		};
	};
	class LeatherShoes_Sunburst: LeatherShoes_Base
	{
		scope=2;
		displayName="Leather Shoes (Sunburst)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\LeatherShoes_Sunburst_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Sunburst_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_Sunburst_co.paa"
		};
	};
	class LeatherShoes_White: LeatherShoes_Base
	{
		scope=2;
		displayName="Leather Shoes (White)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\LeatherShoes_White_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_White_co.paa",
			"DZ\characters\shoes\data\LeatherShoes_White_co.paa"
		};
	};
	class MilitaryBoots_Base: FootwearBase
	{
		scope=0;
		armor=28;
		absorbency=0.1;
		heatIsolation=4.4000001;
		displayName="$STR_ITEMS_MILITARYBOOTS";
		descriptionShort="$STR_ITEMS_MILITARYBOOTS_DESC";
		itemSize[]={2,2};
		weight=1100;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		repairableWith=3;
		model="\DZ\characters\shoes\MilitaryBoots_ground.p3d";
		durability=0.5;
		inventoryCondition="typeOf _parent != typeOf _this";
		attachments[]=
		{
			"Knife"
		};
		itemsCargoSize[]={0,0};
		class ClothingTypes
		{
			male="\DZ\characters\shoes\MilitaryBoots_m.p3d";
			female="\DZ\characters\shoes\MilitaryBoots_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\MilitaryBoots.rvmat",
				"DZ\characters\shoes\data\MilitaryBoots_damage.rvmat",
				"DZ\characters\shoes\data\MilitaryBoots_destruct.rvmat"
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
			"\DZ\characters\shoes\data\MilitaryBoots_beige_co.paa",
			"\DZ\characters\shoes\data\MilitaryBoots_beige_co.paa",
			"\DZ\characters\shoes\data\MilitaryBoots_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class MilitaryBoots_Beige: MilitaryBoots_Base
	{
		scope=2;
		displayName="Military Boots (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\MilitaryBoots_Beige_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Beige_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Beige_co.paa"
		};
	};
	class MilitaryBoots_Black: MilitaryBoots_Base
	{
		scope=2;
		displayName="Military Boots (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\MilitaryBoots_Black_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Black_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Black_co.paa"
		};
	};
	class MilitaryBoots_Bluerock: MilitaryBoots_Base
	{
		scope=2;
		displayName="Military Boots (Bluerock)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\MilitaryBoots_Bluerock_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Bluerock_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Bluerock_co.paa"
		};
	};
	class MilitaryBoots_Brown: MilitaryBoots_Base
	{
		scope=2;
		displayName="Military Boots (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\MilitaryBoots_Brown_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Brown_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Brown_co.paa"
		};
	};
	class MilitaryBoots_Redpunk: MilitaryBoots_Base
	{
		scope=2;
		displayName="Military Boots (Redpunk)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\MilitaryBoots_Redpunk_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Redpunk_co.paa",
			"DZ\characters\shoes\data\MilitaryBoots_Redpunk_co.paa"
		};
	};
	class CombatBoots_Base: FootwearBase
	{
		scope=0;
		armor=32;
		absorbency=0.1;
		heatIsolation=4.4000001;
		displayName="Combat Boots";
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		descriptionShort="A leather and canvas boot, similar to a military boot, that provides ankle stability and protects the feet while on rough terrain.";
		model="\DZ\characters\shoes\CombatBoots_ground.p3d";
		itemSize[]={2,2};
		weight=1350;
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\CombatBoots_m.p3d";
			female="\DZ\characters\shoes\CombatBoots_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\CombatBoots.rvmat",
				"DZ\characters\shoes\data\CombatBoots_damage.rvmat",
				"DZ\characters\shoes\data\CombatBoots_destruct.rvmat"
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
			"\DZ\characters\shoes\data\CombatBoots_beige_co.paa",
			"\DZ\characters\shoes\data\CombatBoots_beige_co.paa",
			"\DZ\characters\shoes\data\CombatBoots_beige_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class CombatBoots_Beige: CombatBoots_Base
	{
		scope=2;
		displayName="Combat Boots (Beige)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\CombatBoots_Beige_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Beige_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Beige_co.paa"
		};
	};
	class CombatBoots_Black: CombatBoots_Base
	{
		scope=2;
		displayName="Combat Boots (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\CombatBoots_Black_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Black_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Black_co.paa"
		};
	};
	class CombatBoots_Brown: CombatBoots_Base
	{
		scope=2;
		displayName="Combat Boots (Brown)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\CombatBoots_Brown_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Brown_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Brown_co.paa"
		};
	};
	class CombatBoots_Green: CombatBoots_Base
	{
		scope=2;
		displayName="Combat Boots (Green)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\CombatBoots_Green_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Green_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Green_co.paa"
		};
	};
	class CombatBoots_Grey: CombatBoots_Base
	{
		scope=2;
		displayName="Combat Boots (Grey)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\CombatBoots_Grey_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Grey_co.paa",
			"DZ\characters\shoes\data\CombatBoots_Grey_co.paa"
		};
	};
	class JoggingShoes_Base: FootwearBase
	{
		scope=0;
		armor=8;
		absorbency=0.44999999;
		heatIsolation=3.5;
		displayName="Jogging Shoes";
		lootTag[]=
		{
			"Civilian",
			"City",
			"Sport"
		};
		descriptionShort="Shoes designed for casual running with a durable rubber outsole and a lightweight synthetic fabric/mesh upper.";
		model="\DZ\characters\shoes\JoggingShoes_ground.p3d";
		itemSize[]={2,1};
		weight=300;
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\JoggingShoes_m.p3d";
			female="\DZ\characters\shoes\JoggingShoes_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\shoes\data\JoggingShoes.rvmat",
				"DZ\characters\shoes\data\JoggingShoes_damage.rvmat",
				"DZ\characters\shoes\data\JoggingShoes_destruct.rvmat"
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
			"\DZ\characters\shoes\data\JoggingShoes_Black_co.paa",
			"\DZ\characters\shoes\data\JoggingShoes_Black_co.paa",
			"\DZ\characters\shoes\data\JoggingShoes_Black_co.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class JoggingShoes_Black: JoggingShoes_Base
	{
		scope=2;
		displayName="Jogging Shoes (Black)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JoggingShoes_Black_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Black_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Black_co.paa"
		};
	};
	class JoggingShoes_Blue: JoggingShoes_Base
	{
		scope=2;
		displayName="Jogging Shoes (Blue)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JoggingShoes_Blue_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Blue_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Blue_co.paa"
		};
	};
	class JoggingShoes_Red: JoggingShoes_Base
	{
		scope=2;
		displayName="Jogging Shoes (Red)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JoggingShoes_Red_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Red_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Red_co.paa"
		};
	};
	class JoggingShoes_Violet: JoggingShoes_Base
	{
		scope=2;
		displayName="Jogging Shoes (Violet)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JoggingShoes_Violet_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Violet_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_Violet_co.paa"
		};
	};
	class JoggingShoes_White: JoggingShoes_Base
	{
		scope=2;
		displayName="Jogging Shoes (White)";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\shoes\data\JoggingShoes_White_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_White_co.paa",
			"DZ\characters\shoes\data\JoggingShoes_White_co.paa"
		};
	};
	class Shoes_LeatherMoccasinsBase: FootwearBase
	{
		scope=0;
		armor=8;
		absorbency=0.44999999;
		heatIsolation=3.5;
		displayName="Moccasins Shoes";
		descriptionShort="Moccasins Shoes are made from the tanned hide of various animals.";
		model="\DZ\characters\shoes\Shoes_LeatherMoccasins_g.p3d";
		itemSize[]={2,1};
		lootTag[]=
		{
			"Civilian",
			"City"
		};
		weight=380;
		repairableWith=3;
		durability=0.5;
		class ClothingTypes
		{
			male="\DZ\characters\shoes\Shoes_LeatherMoccasins_m.p3d";
			female="\DZ\characters\shoes\Shoes_LeatherMoccasins_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\shoes\data\Shoes_LeatherMoccasins_CO.paa",
			"\DZ\characters\shoes\data\Shoes_LeatherMoccasins_CO.paa",
			"\DZ\characters\shoes\data\Shoes_LeatherMoccasins_CO.paa"
		};
		tooltip="_text = _this call fnc_generateTooltip;_text";
	};
	class Shoes_LeatherMoccasins_Natural: Shoes_LeatherMoccasinsBase
	{
		scope=1;
		displayName="Natural Leather Moccasins";
		color="Natural";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural_damage.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Natural.rvmat"
		};
	};
	class Shoes_LeatherMoccasins_Beige: Shoes_LeatherMoccasinsBase
	{
		scope=1;
		displayName="Beige Leather Moccasins";
		color="Beige";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige_damage.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Beige.rvmat"
		};
	};
	class Shoes_LeatherMoccasins_Brown: Shoes_LeatherMoccasinsBase
	{
		scope=1;
		displayName="Brown Leather Moccasins";
		color="Brown";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown_damage.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Brown.rvmat"
		};
	};
	class Shoes_LeatherMoccasins_Black: Shoes_LeatherMoccasinsBase
	{
		scope=1;
		displayName="Black Leather Moccasins";
		color="Black";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black_damage.rvmat",
				"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black.rvmat",
			"dz\characters\shoes\data\Shoes_LeatherMoccasins_Black.rvmat"
		};
	};
	class MaleFeetAbove: MaleFeetNew
	{
		displayName="Bare feet above";
		model="\dz\characters\shoes\feet_m_above0.p3d";
	};
	class AthleticShoesAbove: AthleticShoes_Base
	{
		scope=2;
		displayName="AthleticShoesAbove male model only so far";
		class ClothingTypes
		{
			male="\DZ\characters\shoes\athleticShoes_m_above0.p3d";
			female="\DZ\characters\shoes\athleticShoes_m_above0.p3d";
		};
	};
};
