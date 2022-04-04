class CfgPatches
{
	class DZ_Characters_Gloves
	{
		units[]=
		{
			"MaleHands",
			"FemaleHands"
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
	class GlovesBase;
	class InventoryBase;
	class MaleHandsNew: InventoryBase
	{
		scope=1;
		displayName="Bare hands new";
		model="\DZ\characters\gloves\hands_new_m.p3d";
		inventorySlot="Gloves";
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
		class DamageArmor
		{
			biological=0;
		};
	};
	class MaleAsianHandsNew: MaleHandsNew
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
	class MaleAfricanHandsNew: MaleHandsNew
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
	class MaleLatinoHandsNew: MaleHandsNew
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
	class MaleIndianHands: MaleHandsNew
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
	class MaleDeanHands: MaleHandsNew
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
	class MaleJazzHands: MaleHandsNew
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
	class MaleHandsWorkingGloves: InventoryBase
	{
		scope=1;
		displayName="Working gloves";
		model="\DZ\characters\gloves\working_gloves_m.p3d";
		inventorySlot="Gloves";
		hiddenSelections[]=
		{
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class FemaleHands: MaleHandsNew
	{
		model="\DZ\characters\gloves\hands_f.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_white01_001_medium_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\heads\data\hhl_f_white_01.rvmat"
		};
	};
	class FemaleAsianHands: FemaleHands
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
	class FemaleAfricanHands: FemaleHands
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
	class FemaleLatinoHands: FemaleHands
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
	class FemaleIndianHands: FemaleHands
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
	class FemaleKamilaHands: FemaleHands
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
	class FemaleHenrietHands: FemaleHands
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
	class FemaleJanaZHands: FemaleHands
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
	class MaleHandsAbove: MaleHandsNew
	{
		displayName="Bare hands above";
		model="\dz\characters\gloves\hands_m_above0.p3d";
	};
	class WorkingGlovesBase: GlovesBase
	{
		scope=0;
		absorbency=0.40000001;
		heatIsolation=0.25999999;
		displayName="Working Gloves";
		descriptionShort="Working gloves able to withstand rough handling.";
		model="\DZ\characters\gloves\working_gloves_g.p3d";
		lootTag[]=
		{
			"Work",
			"Military",
			"Military_east",
			"Military_west",
			"Firefighters"
		};
		inventoryCondition="(count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent";
		itemSize[]={1,1};
		repairableWith=2;
		weight=130;
		class ClothingTypes
		{
			male="\DZ\characters\gloves\working_gloves_m.p3d";
			female="\DZ\characters\gloves\working_gloves_f.p3d";
		};
		class DamageArmor
		{
			biological=0.30000001;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\gloves\data\WorkingGloves.rvmat",
				"DZ\characters\gloves\data\WorkingGloves_damage.rvmat",
				"DZ\characters\gloves\data\WorkingGloves_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
	};
	class WorkingGloves_Beige: WorkingGlovesBase
	{
		scope=2;
		displayName="Beige Working Gloves";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_Beige_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Beige_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Beige_co.paa"
		};
	};
	class WorkingGloves_Black: WorkingGlovesBase
	{
		scope=2;
		displayName="Black Working Gloves";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_Black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Black_co.paa"
		};
	};
	class WorkingGloves_Brown: WorkingGlovesBase
	{
		scope=2;
		displayName="Brown Working Gloves";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_Brown_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Brown_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Brown_co.paa"
		};
	};
	class WorkingGloves_Yellow: WorkingGlovesBase
	{
		scope=2;
		displayName="Yellow Working Gloves";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_Yellow_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Yellow_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_Yellow_co.paa"
		};
	};
};
