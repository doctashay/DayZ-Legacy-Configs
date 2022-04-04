class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[]=
		{
			"Shirt_CheckRed",
			"Hoodie_Blue",
			"Hoodie_Black",
			"Hoodie_Brown",
			"Hoodie_Green",
			"Hoodie_Grey",
			"Hoodie_Red",
			"MaleTorso",
			"FemaleTorso"
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
	class TopwearBase;
	class InventoryBase;
	class ClothingTopwearBase: TopwearBase
	{
		inventoryCondition="typeOf _parent != typeOf _this";
		ragQuantity=0;
		class DamageArmor
		{
			bleed=0.050000001;
		};
	};
	class MaleTorsoNew: InventoryBase
	{
		scope=1;
		displayName="Underwear top new";
		model="\DZ\characters\tops\torso_new_m.p3d";
		inventorySlot="Body";
		hiddenSelections[]=
		{
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_white01_002_medium_co.paa"
		};
	};
	class MaleAsianTorsoNew: MaleTorsoNew
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\heads\data\hhl_m_asian01_001_light_co.paa"
		};
	};
	class MaleAfricanTorsoNew: MaleTorsoNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_african01_001_medium_co.paa"
		};
	};
	class MaleLatinoTorsoNew: MaleTorsoNew
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_m_latino01_001_medium_co.paa"
		};
	};
	class FemaleTorso: MaleTorsoNew
	{
		model="\DZ\characters\tops\torso_f.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_white01_001_medium_co.paa"
		};
	};
	class FemaleAsianTorso: FemaleTorso
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_asian01_001_medium_co.paa"
		};
	};
	class FemaleAfricanTorso: FemaleTorso
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_african01_001_medium_co.paa"
		};
	};
	class FemaleLatinoTorso: FemaleTorso
	{
		hiddenSelectionsTextures[]=
		{
			"dz\characters\heads\data\hhl_f_latino01_001_medium_co.paa"
		};
	};
	class BubbleGooseBase: ClothingTopwearBase
	{
		displayName="Down Jacket";
		model="\DZ\characters\tops\BubbleGoose_g.p3d";
		descriptionShort="A quilted jacket filled with down feathers that can be worn over existing clothing. It is too bulky to allow the wearer to have a vest on at the same time.";
		inventoryCondition="isNull(_parent itemInSlot 'Vest')";
		itemSize[]={3,3};
		itemsCargoSize[]={3,2};
		absorbency=0.89999998;
		ragQuantity=0;
		repairableWith=0;
		noVest=1;
		class ClothingTypes
		{
			male="\DZ\characters\tops\BubbleGoose_m.p3d";
			female="\DZ\characters\tops\BubbleGoose_m.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\bubblegoose.rvmat",
				"DZ\characters\tops\data\bubblegoose_damage.rvmat",
				"DZ\characters\tops\data\bubblegoose_destruct.rvmat",
				"DZ\characters\tops\data\bubblegoose.rvmat",
				"DZ\characters\tops\data\bubblegoose_damage.rvmat",
				"DZ\characters\tops\data\bubblegoose_destruct.rvmat"
			};
		};
	};
	class BubbleGoose_Blue: BubbleGooseBase
	{
		scope=2;
		displayName="Blue Down Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\BubbleGoose_Blue_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Blue_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Blue_co.paa"
		};
	};
	class BubbleGoose_Red: BubbleGooseBase
	{
		scope=2;
		displayName="Red Down Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\BubbleGoose_Red_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Red_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Red_co.paa"
		};
	};
	class BubbleGoose_Orange: BubbleGooseBase
	{
		scope=2;
		displayName="Orange Down Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\BubbleGoose_Orange_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Orange_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Orange_co.paa"
		};
	};
	class BubbleGoose_Green: BubbleGooseBase
	{
		scope=2;
		displayName="Green Down Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\BubbleGoose_Green_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Green_co.paa",
			"DZ\characters\tops\data\BubbleGoose_Green_co.paa"
		};
	};
	class ShirtBase: ClothingTopwearBase
	{
		displayName="Shirt";
		model="\DZ\characters\tops\Shirt_ground.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={3,4};
		absorbency=0.80000001;
		ragQuantity=4;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\shirt_m.p3d";
			female="\DZ\characters\tops\shirt_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\shirt.rvmat",
				"DZ\characters\tops\data\shirt_damage.rvmat",
				"DZ\characters\tops\data\shirt_destruct.rvmat",
				"DZ\characters\tops\data\shirt_ground.rvmat",
				"DZ\characters\tops\data\shirt_ground_damage.rvmat",
				"DZ\characters\tops\data\shirt_ground_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.1;
		};
	};
	class Shirt_CheckBlue: ShirtBase
	{
		scope=2;
		displayName="Blue Check Shirt";
		descriptionShort="A common long sleeved, button up, cloth garment for the upper body made from a polyester and cotton blend with a dark black and blue check pattern.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_checkBlue_co.paa",
			"\dz\characters\tops\data\shirt_checkBlue_co.paa",
			"\dz\characters\tops\data\shirt_checkBlue_co.paa"
		};
	};
	class Shirt_CheckBlueBright: ShirtBase
	{
		scope=2;
		displayName="$STR_ITEMS_CHECKSHIRTBRIGHTBLUE";
		descriptionShort="$STR_ITEMS_CHECKSHIRTBRIGHTBLUE_DESC";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_checkBlueBright_co.paa",
			"\dz\characters\tops\data\shirt_checkBlueBright_co.paa",
			"\dz\characters\tops\data\shirt_checkBlueBright_co.paa"
		};
	};
	class Shirt_CheckGreen: ShirtBase
	{
		scope=2;
		displayName="Green Check Shirt";
		descriptionShort="A common long sleeved, button up, cloth garment for the upper body made from a polyester and cotton blend with a black and green check pattern.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_checkGreen_co.paa",
			"\dz\characters\tops\data\shirt_checkGreen_co.paa",
			"\dz\characters\tops\data\shirt_checkGreen_co.paa"
		};
	};
	class Shirt_CheckRed: ShirtBase
	{
		scope=2;
		displayName="Red Check Shirt";
		descriptionShort="A common long sleeved, button up, cloth garment for the upper body made from a polyester and cotton blend with a faded black and red check pattern.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_checkRed_co.paa",
			"\dz\characters\tops\data\shirt_checkRed_co.paa",
			"\dz\characters\tops\data\shirt_checkRed_co.paa"
		};
	};
	class Shirt_CheckWhite: ShirtBase
	{
		scope=2;
		displayName="White Check Shirt";
		descriptionShort="A common long sleeved, button up, cloth garment for the upper body made from a polyester and cotton blend with a black and white check pattern.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_checkWhite_co.paa",
			"\dz\characters\tops\data\shirt_checkWhite_co.paa",
			"\dz\characters\tops\data\shirt_checkWhite_co.paa"
		};
	};
	class Shirt_PlaneBlack: ShirtBase
	{
		scope=2;
		displayName="Black Shirt";
		descriptionShort="A common long sleeved, button up, cloth garment for the upper body made from a polyester and cotton blend that has been dyed black.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Shirt_ground_planeBlack_co.paa",
			"\dz\characters\tops\data\shirt_planeBlack_co.paa",
			"\dz\characters\tops\data\shirt_planeBlack_co.paa"
		};
	};
	class TShirtBase: ClothingTopwearBase
	{
		displayName="T-Shirt";
		model="\DZ\characters\tops\tshirt_ground.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={2,2};
		absorbency=0.80000001;
		ragQuantity=2;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\tshirt_m.p3d";
			female="\DZ\characters\tops\tshirt_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\tshirt.rvmat",
				"DZ\characters\tops\data\tshirt_damage.rvmat",
				"DZ\characters\tops\data\tshirt_destruct.rvmat",
				"DZ\characters\tops\data\tshirt_ground.rvmat",
				"DZ\characters\tops\data\tshirt_ground_damage.rvmat",
				"DZ\characters\tops\data\tshirt_ground_destruct.rvmat",
				"DZ\characters\tops\data\tshirt_ground.rvmat",
				"DZ\characters\tops\data\tshirt_ground_damage.rvmat",
				"DZ\characters\tops\data\tshirt_ground_destruct.rvmat"
			};
		};
	};
	class TShirtBeige: TShirtBase
	{
		scope=2;
		displayName="Beige T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain beige T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		absorbency=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_beige_co.paa",
			"\DZ\characters\tops\Data\tshirt_beige_co.paa",
			"\DZ\characters\tops\Data\tshirt_beige_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtBlack: TShirtBeige
	{
		displayName="Black T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain black T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_black_co.paa",
			"\DZ\characters\tops\Data\tshirt_black_co.paa",
			"\DZ\characters\tops\Data\tshirt_black_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtBlue: TShirtBeige
	{
		displayName="Blue T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain blue T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_blue_co.paa",
			"\DZ\characters\tops\Data\tshirt_blue_co.paa",
			"\DZ\characters\tops\Data\tshirt_blue_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtGreen: TShirtBeige
	{
		displayName="Green T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain green T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_green_co.paa",
			"\DZ\characters\tops\Data\tshirt_green_co.paa",
			"\DZ\characters\tops\Data\tshirt_green_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtOrangeWhiteStripes: TShirtBeige
	{
		displayName="T-Shirt with orange and white stripes";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this orange and white striped T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_orangeWhiteStripes_co.paa",
			"\DZ\characters\tops\Data\tshirt_orangeWhiteStripes_co.paa",
			"\DZ\characters\tops\Data\tshirt_orangeWhiteStripes_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtRed: TShirtBeige
	{
		displayName="Red T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain red T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_red_co.paa",
			"\DZ\characters\tops\Data\tshirt_red_co.paa",
			"\DZ\characters\tops\Data\tshirt_red_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtRedBlackStripes: TShirtBeige
	{
		displayName="T-Shirt with red and black stripes";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this red and black striped T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_redBlackStripes_co.paa",
			"\DZ\characters\tops\Data\tshirt_redBlackStripes_co.paa",
			"\DZ\characters\tops\Data\tshirt_redBlackStripes_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtWhite: TShirtBeige
	{
		displayName="White T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain white T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_white_co.paa",
			"\DZ\characters\tops\Data\tshirt_white_co.paa",
			"\DZ\characters\tops\Data\tshirt_white_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class TShirtGrey: TShirtBeige
	{
		displayName="Grey T-Shirt";
		descriptionShort="Specifically crafted from 100% pure cotton fibers, this plain grey T-shirt with short sleeves has a round neck line and a regular fit. Made in China.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_grey_co.paa",
			"\DZ\characters\tops\Data\tshirt_grey_co.paa",
			"\DZ\characters\tops\Data\tshirt_grey_co.paa",
			"\DZ\characters\heads\data\hhl_m_white01_001_light_co.paa"
		};
	};
	class HoodieBase: ClothingTopwearBase
	{
		displayName="$STR_ITEMS_HOODIE";
		model="\DZ\characters\tops\hoodie_ground.p3d";
		descriptionShort="$STR_ITEMS_HOODIE_DESC";
		itemSize[]={2,2};
		itemsCargoSize[]={3,4};
		absorbency=0.69999999;
		ragQuantity=4;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\hoodie_m.p3d";
			female="\DZ\characters\tops\hoodie_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\hoodie.rvmat",
				"DZ\characters\tops\data\hoodie_damage.rvmat",
				"DZ\characters\tops\data\hoodie_destruct.rvmat",
				"DZ\characters\tops\data\hoodie_f.rvmat",
				"DZ\characters\tops\data\hoodie_f_damage.rvmat",
				"DZ\characters\tops\data\hoodie_f_destruct.rvmat",
				"DZ\characters\tops\data\hoodie_f_grd.rvmat",
				"DZ\characters\tops\data\hoodie_f_grd_damage.rvmat",
				"DZ\characters\tops\data\hoodie_f_grd_destruct.rvmat",
				"DZ\characters\tops\data\hoodie_m_grd.rvmat",
				"DZ\characters\tops\data\hoodie_m_grd_damage.rvmat",
				"DZ\characters\tops\data\hoodie_m_grd_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.2;
		};
	};
	class Hoodie_Blue: HoodieBase
	{
		scope=2;
		displayName="Blue Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_blue_co.paa",
			"\dz\characters\tops\data\hoodie_blue_co.paa",
			"\dz\characters\tops\data\hoodie_f_blue_co.paa"
		};
	};
	class Hoodie_Black: HoodieBase
	{
		scope=2;
		displayName="Black Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_black_co.paa",
			"\dz\characters\tops\data\hoodie_black_co.paa",
			"\dz\characters\tops\data\hoodie_f_black_co.paa"
		};
	};
	class Hoodie_Brown: HoodieBase
	{
		scope=2;
		displayName="Brown Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_brown_co.paa",
			"\dz\characters\tops\data\hoodie_brown_co.paa",
			"\dz\characters\tops\data\hoodie_f_brown_co.paa"
		};
	};
	class Hoodie_Green: HoodieBase
	{
		scope=2;
		displayName="Green Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_green_co.paa",
			"\dz\characters\tops\data\hoodie_green_co.paa",
			"\dz\characters\tops\data\hoodie_f_green_co.paa"
		};
	};
	class Hoodie_Grey: HoodieBase
	{
		scope=2;
		displayName="Grey Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_grey_co.paa",
			"\dz\characters\tops\data\hoodie_grey_co.paa",
			"\dz\characters\tops\data\hoodie_f_grey_co.paa"
		};
	};
	class Hoodie_Red: HoodieBase
	{
		scope=2;
		displayName="Red Hoodie";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Hoodie_m_grd_red_co.paa",
			"\dz\characters\tops\data\hoodie_red_co.paa",
			"\dz\characters\tops\data\hoodie_f_pink_co.paa"
		};
	};
	class TacticalShirtBase: ClothingTopwearBase
	{
		displayName="Tactical Shirt";
		model="\DZ\characters\tops\pcu5jacket_ground.p3d";
		descriptionShort="A lightweight jacket used by the military that is wind proof and water resistant. Features two large front pockets, two upper arm pockets and closable Velcro cuffs.";
		itemSize[]={2,2};
		itemsCargoSize[]={4,4};
		absorbency=0.1;
		ragQuantity=4;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\pcu5jacket_m.p3d";
			female="\DZ\characters\tops\pcu5jacket_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\pcu5jacket.rvmat",
				"DZ\characters\tops\data\pcu5jacket_damage.rvmat",
				"DZ\characters\tops\data\pcu5jacket_destruct.rvmat",
				"DZ\characters\tops\data\pcu5jacket_ground.rvmat",
				"DZ\characters\tops\data\pcu5jacket_ground_damage.rvmat",
				"DZ\characters\tops\data\pcu5jacket_ground_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.25;
		};
	};
	class TacticalShirtGrey: TacticalShirtBase
	{
		scope=2;
		displayName="Grey Tactical Shirt";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PCU5Jacket_ground_grey_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_grey_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_grey_co.paa"
		};
	};
	class TacticalShirtBlack: TacticalShirtBase
	{
		scope=2;
		displayName="Black Tactical Shirt";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PCU5Jacket_ground_black_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_black_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_black_co.paa"
		};
	};
	class TacticalShirtOlive: TacticalShirtBase
	{
		scope=2;
		displayName="Olive Tactical Shirt";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PCU5Jacket_ground_Olive_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_Olive_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_Olive_co.paa"
		};
	};
	class TacticalShirtTan: TacticalShirtBase
	{
		scope=2;
		displayName="Tan Tactical Shirt";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PCU5Jacket_ground_Tan_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_Tan_co.paa",
			"\dz\characters\tops\data\PCU5Jacket_Tan_co.paa"
		};
	};
	class RaincoatBase: ClothingTopwearBase
	{
		displayName="Raincoat";
		model="\DZ\characters\tops\raincoat_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={2,2};
		repairableWith=0;
		class ClothingTypes
		{
			male="\DZ\characters\tops\raincoat_m.p3d";
			female="\DZ\characters\tops\raincoat_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\raincoat.rvmat",
				"DZ\characters\tops\data\raincoat_damage.rvmat",
				"DZ\characters\tops\data\raincoat_destruct.rvmat",
				"DZ\characters\tops\data\raincoat_g.rvmat",
				"DZ\characters\tops\data\raincoat_g_damage.rvmat",
				"DZ\characters\tops\data\raincoat_g_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.2;
		};
	};
	class Raincoat_Orange: RaincoatBase
	{
		scope=2;
		displayName="Orange Raincoat";
		descriptionShort="A simple bright orange jacket constructed from breathable, water resistant fabrics. Includes a hood and extended collar to protect the head and upper body from rain.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\raincoat_g_orange_co.paa",
			"\dz\characters\tops\data\raincoat_orange_co.paa",
			"\dz\characters\tops\data\raincoat_orange_co.paa"
		};
	};
	class Raincoat_Green: RaincoatBase
	{
		scope=2;
		displayName="Green Raincoat";
		descriptionShort="A simple green jacket constructed from breathable, water resistant fabrics. Includes a hood and extended collar to protect the head and upper body from rain.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\raincoat_g_green_co.paa",
			"\dz\characters\tops\data\raincoat_green_co.paa",
			"\dz\characters\tops\data\raincoat_green_co.paa"
		};
	};
	class Raincoat_Yellow: RaincoatBase
	{
		scope=2;
		displayName="Yellow Raincoat";
		descriptionShort="A simple bright yellow jacket constructed from breathable, water resistant fabrics. Includes a hood and extended collar to protect the head and upper body from rain.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\raincoat_g_yellow_co.paa",
			"\dz\characters\tops\data\raincoat_yellow_co.paa",
			"\dz\characters\tops\data\raincoat_yellow_co.paa"
		};
	};
	class TTsKO_JacketBase: ClothingTopwearBase
	{
		displayName="TTsKO Jacket";
		model="\DZ\characters\tops\TTsKO_Jacket_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={6,5};
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\TTsKO_Jacket_m.p3d";
			female="\DZ\characters\tops\TTsKO_Jacket_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\TTsKO_Jacket.rvmat",
				"DZ\characters\tops\data\TTsKO_Jacket_damage.rvmat",
				"DZ\characters\tops\data\TTsKO_Jacket_destruct.rvmat",
				"DZ\characters\tops\data\TTsKO_Jacket.rvmat",
				"DZ\characters\tops\data\TTsKO_Jacket_damage.rvmat",
				"DZ\characters\tops\data\TTsKO_Jacket_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.30000001;
		};
	};
	class TTsKO_Jacket_Camo: TTsKO_JacketBase
	{
		scope=2;
		displayName="TTsKO Jacket";
		descriptionShort="Three colour camouflage Soviet military field jacket, designed for quick and easy access to large cargo pockets.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\TTsKO_Jacket_g_camo_co.paa",
			"\dz\characters\tops\data\TTsKO_Jacket_camo_co.paa",
			"\dz\characters\tops\data\TTsKO_Jacket_camo_co.paa"
		};
	};
	class Gorka_up_Base: ClothingTopwearBase
	{
		displayName="Gorka E Military Uniform Jacket";
		model="\DZ\characters\tops\gorka_up_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={4,5};
		repairableWith=2;
		descriptionShort="Upper part of military issued Gorka E uniform, made of warm materials, designed to keep you warm yet flexible";
		class ClothingTypes
		{
			male="\DZ\characters\tops\gorka_up_m.p3d";
			female="\DZ\characters\tops\gorka_up_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\GorkaUpper.rvmat",
				"DZ\characters\tops\data\GorkaUpper_damage.rvmat",
				"DZ\characters\tops\data\GorkaUpper_destruct.rvmat",
				"DZ\characters\tops\data\GorkaUpper.rvmat",
				"DZ\characters\tops\data\GorkaUpper_damage.rvmat",
				"DZ\characters\tops\data\GorkaUpper_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.40000001;
		};
	};
	class Gorka_up_summer: Gorka_up_Base
	{
		scope=2;
		displayName="Gorka E Military Uniform Jacket - Summer camo";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\gorka_up_g_summer_co.paa",
			"\dz\characters\tops\data\gorka_upper_summer_co.paa",
			"\dz\characters\tops\data\gorka_upper_summer_co.paa"
		};
	};
	class Gorka_up_flat: Gorka_up_Base
	{
		scope=2;
		displayName="Green Gorka E Military Uniform Jacket";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\gorka_up_g_flat_co.paa",
			"\dz\characters\tops\data\gorka_upper_flat_co.paa",
			"\dz\characters\tops\data\gorka_upper_flat_co.paa"
		};
	};
	class Gorka_up_autumn: Gorka_up_Base
	{
		scope=2;
		displayName="Gorka E Military Uniform Jacket - Autumn camo";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\gorka_up_g_autumn_co.paa",
			"\dz\characters\tops\data\gorka_upper_autumn_co.paa",
			"\dz\characters\tops\data\gorka_upper_autumn_co.paa"
		};
	};
	class Gorka_up_PautRev: Gorka_up_Base
	{
		scope=2;
		displayName="Gorka E Military Uniform Jacket - PautRev camo";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\gorka_up_g_PautRev_co.paa",
			"\dz\characters\tops\data\gorka_upper_PautRev_co.paa",
			"\dz\characters\tops\data\gorka_upper_PautRev_co.paa"
		};
	};
	class RidersJacket_JacketBase: ClothingTopwearBase
	{
		displayName="Riders Jacket";
		model="\DZ\characters\tops\riders_jacket_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={4,3};
		repairableWith=0;
		class ClothingTypes
		{
			male="\DZ\characters\tops\riders_jacket_m.p3d";
			female="\DZ\characters\tops\riders_jacket_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\Riders_Jacket.rvmat",
				"DZ\characters\tops\data\Riders_Jacket_damage.rvmat",
				"DZ\characters\tops\data\Riders_Jacket_destruct.rvmat",
				"DZ\characters\tops\data\Riders_Jacket.rvmat",
				"DZ\characters\tops\data\Riders_Jacket_damage.rvmat",
				"DZ\characters\tops\data\Riders_Jacket_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			ballistic=0.2;
			bleed=0.69999999;
		};
	};
	class RidersJacket_Black: RidersJacket_JacketBase
	{
		scope=2;
		displayName="Riders Jacket";
		descriptionShort="Classic motorcycle ultra-rugged leather jacket, durable and protective.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Riders_Jacket_black_co.paa",
			"\dz\characters\tops\data\Riders_Jacket_black_co.paa",
			"\dz\characters\tops\data\Riders_Jacket_black_co.paa"
		};
	};
	class WoolCoatBase: ClothingTopwearBase
	{
		scope=2;
		displayName="Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		model="\DZ\characters\tops\WoolCoat_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={3,4};
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\WoolCoat_m.p3d";
			female="\DZ\characters\tops\WoolCoat_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_black_co.paa",
			"\dz\characters\tops\data\WoolCoat_black_co.paa",
			"\dz\characters\tops\data\WoolCoat_black_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\WoolCoat.rvmat",
				"DZ\characters\tops\data\WoolCoat_damage.rvmat",
				"DZ\characters\tops\data\WoolCoat_destruct.rvmat",
				"DZ\characters\tops\data\WoolCoat.rvmat",
				"DZ\characters\tops\data\WoolCoat_damage.rvmat",
				"DZ\characters\tops\data\WoolCoat_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.1;
		};
	};
	class WoolCoat_Black: WoolCoatBase
	{
		scope=2;
		displayName="Black Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
	};
	class WoolCoat_Red: WoolCoatBase
	{
		scope=2;
		displayName="Red Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_red_co.paa",
			"\dz\characters\tops\data\WoolCoat_red_co.paa",
			"\dz\characters\tops\data\WoolCoat_red_co.paa"
		};
	};
	class WoolCoat_Blue: WoolCoatBase
	{
		scope=2;
		displayName="Blue Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_blue_co.paa",
			"\dz\characters\tops\data\WoolCoat_blue_co.paa",
			"\dz\characters\tops\data\WoolCoat_blue_co.paa"
		};
	};
	class WoolCoat_Green: WoolCoatBase
	{
		scope=2;
		displayName="Green Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_green_co.paa",
			"\dz\characters\tops\data\WoolCoat_green_co.paa",
			"\dz\characters\tops\data\WoolCoat_green_co.paa"
		};
	};
	class WoolCoat_Beige: WoolCoatBase
	{
		scope=2;
		displayName="Beige Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_beige_co.paa",
			"\dz\characters\tops\data\WoolCoat_beige_co.paa",
			"\dz\characters\tops\data\WoolCoat_beige_co.paa"
		};
	};
	class WoolCoat_Check_Red: WoolCoatBase
	{
		scope=2;
		displayName="Red Check Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa",
			"\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa",
			"\dz\characters\tops\data\WoolCoat_red_ckeck_co.paa"
		};
	};
	class WoolCoat_Check_Black: WoolCoatBase
	{
		scope=2;
		displayName="Black Check Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_black_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_black_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_black_check_co.paa"
		};
	};
	class WoolCoat_Check_Blue: WoolCoatBase
	{
		scope=2;
		displayName="Blue Check Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_blue_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_blue_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_blue_check_co.paa"
		};
	};
	class WoolCoat_Check_Grey: WoolCoatBase
	{
		scope=2;
		displayName="Grey Check Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_grey_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_grey_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_grey_check_co.paa"
		};
	};
	class WoolCoat_Check_Brown: WoolCoatBase
	{
		scope=2;
		displayName="Brown Check Wool Coat";
		descriptionShort="Keeps you looking classy while staying warm.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\WoolCoat_brown_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_brown_check_co.paa",
			"\dz\characters\tops\data\WoolCoat_brown_check_co.paa"
		};
	};
	class TrackSuit_JacketBase: ClothingTopwearBase
	{
		scope=2;
		displayName="$STR_ITEMS_TRACKSUITJACKET";
		descriptionShort="$STR_ITEMS_TRACKSUITJACKET_DESC";
		model="\DZ\characters\tops\TrackSuit_Jacket_g.p3d";
		itemSize[]={2,1};
		itemsCargoSize[]={2,2};
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\TrackSuit_Jacket_m.p3d";
			female="\DZ\characters\tops\TrackSuit_Jacket_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\TrackSuit_Jacket.rvmat",
				"DZ\characters\tops\data\TrackSuit_Jacket_damage.rvmat",
				"DZ\characters\tops\data\TrackSuit_Jacket_destruct.rvmat",
				"DZ\characters\tops\data\TrackSuit_Jacket.rvmat",
				"DZ\characters\tops\data\TrackSuit_Jacket_damage.rvmat",
				"DZ\characters\tops\data\TrackSuit_Jacket_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.1;
		};
	};
	class TrackSuit_Jacket_Black: TrackSuit_JacketBase
	{
		scope=2;
		displayName="Black Tracksuit Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\TrackSuit_Jacket_Black_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Black_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Black_co.paa"
		};
	};
	class TrackSuit_Jacket_Blue: TrackSuit_JacketBase
	{
		scope=2;
		displayName="Blue Tracksuit Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\TrackSuit_Jacket_Blue_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Blue_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Blue_co.paa"
		};
	};
	class TrackSuit_Jacket_Green: TrackSuit_JacketBase
	{
		scope=2;
		displayName="Green Tracksuit Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\TrackSuit_Jacket_Green_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Green_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Green_co.paa"
		};
	};
	class TrackSuit_Jacket_LightBlue: TrackSuit_JacketBase
	{
		scope=2;
		displayName="LightBlue Tracksuit Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_LightBlue_co.paa"
		};
	};
	class TrackSuit_Jacket_Red: TrackSuit_JacketBase
	{
		scope=2;
		displayName="Red Tracksuit Jacket";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\tops\data\TrackSuit_Jacket_Red_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Red_co.paa",
			"DZ\characters\tops\data\TrackSuit_Jacket_Red_co.paa"
		};
	};
	class PoliceJacket: ClothingTopwearBase
	{
		scope=2;
		displayName="Police Uniform Jacket";
		descriptionShort="Standard issue of Chernarus Police force uniform jacket.";
		model="\DZ\characters\tops\PoliceJacket_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={4,5};
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\PoliceJacket_m.p3d";
			female="\DZ\characters\tops\PoliceJacket_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PoliceJacket_g_co.paa",
			"\dz\characters\tops\data\PoliceJacket_co.paa",
			"\dz\characters\tops\data\PoliceJacket_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\PoliceJacket.rvmat",
				"DZ\characters\tops\data\PoliceJacket_damage.rvmat",
				"DZ\characters\tops\data\PoliceJacket_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.1;
		};
	};
	class PoliceJacket_orel: PoliceJacket
	{
		scope=2;
		displayName="OREL Unit Uniform Jacket";
		descriptionShort="Uniform Jacket of the Chernarus OREL special police force unit";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\PoliceJacket_g_KamyshCamo_co.paa",
			"\dz\characters\tops\data\PoliceJacket_KamyshCamo_co.paa",
			"\dz\characters\tops\data\PoliceJacket_KamyshCamo_co.paa"
		};
	};
	class FirefighterJacket: ClothingTopwearBase
	{
		scope=2;
		displayName="Fire-fighter Uniform Jacket";
		descriptionShort="Standard issue of Chernarus Fire-fighting force uniform jacket.";
		model="\DZ\characters\tops\Firefighter_g.p3d";
		itemSize[]={2,2};
		itemsCargoSize[]={5,5};
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\tops\Firefighter_m.p3d";
			female="\DZ\characters\tops\Firefighter_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\Firefighter_co.paa",
			"\dz\characters\tops\data\Firefighter_co.paa",
			"\dz\characters\tops\data\Firefighter_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\tops\data\Firefighter.rvmat",
				"DZ\characters\tops\data\Firefighter_damage.rvmat",
				"DZ\characters\tops\data\Firefighter_destruct.rvmat"
			};
		};
		class DamageArmor: DamageArmor
		{
			bleed=0.1;
		};
	};
};
