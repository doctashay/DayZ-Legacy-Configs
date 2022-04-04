class CfgPatches
{
	class DZ_Characters_Masks
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
class CfgVehicles
{
	class MaskBase;
	class GasMaskBase: MaskBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=0.80000001;
		displayName="Gas Mask";
		descriptionShort="A full face mask designed to protect the user from airborne pollutants. It is constructed from elastic polymer with adjustable straps connected to a filter cartridge.";
		lootTag[]=
		{
			"Firefighters",
			"Military",
			"Work"
		};
		model="\DZ\characters\masks\GasMask_g.p3d";
		itemSize[]={1,2};
		weight=730;
		noHelmet=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Headgear') >> 'noMask') == 0)";
		class ClothingTypes
		{
			male="\DZ\characters\masks\GasMask_m.p3d";
			female="\DZ\characters\masks\GasMask_f.p3d";
		};
		class DamageArmor
		{
			biological=1;
			bleed=0.30000001;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\GasMask.rvmat",
				"DZ\characters\masks\data\GasMask_damage.rvmat",
				"DZ\characters\masks\data\GasMask_destruct.rvmat"
			};
		};
	};
	class GasMask: GasMaskBase
	{
		scope=2;
		displayName="Gas Mask";
	};
	class BandanaMaskBase: MaskBase
	{
		scope=0;
		absorbency=0.89999998;
		heatIsolation=0.5;
		descriptionShort="Face mask made out of bandana. Don't mess with us cuz we're in the wild wild west.";
		itemSize[]={1,1};
		repairableWith=2;
		lootTag[]=
		{
			"Civilian"
		};
		ragQuantity=1;
		weight=510;
		model="\DZ\characters\masks\BandanaFace_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\masks\BandanaFace_m.p3d";
			female="\DZ\characters\masks\BandanaFace_f.p3d";
		};
		class DamageArmor
		{
			biological=0.80000001;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\bandanaf.rvmat",
				"DZ\characters\headgear\data\bandanaf_damage.rvmat",
				"DZ\characters\headgear\data\bandanaf_destruct.rvmat"
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
			"\DZ\characters\headgear\data\Bandana_black_co.paa",
			"\DZ\characters\headgear\data\Bandana_black_co.paa",
			"\DZ\characters\headgear\data\Bandana_black_co.paa"
		};
	};
	class BandanaMask_redpattern: BandanaMaskBase
	{
		scope=2;
		displayName="Face Mask Red Pattern";
		color="redpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_ground_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_redpattern_co.paa"
		};
	};
	class BandanaMask_blackpattern: BandanaMaskBase
	{
		scope=2;
		displayName="Face mask Black Pattern";
		color="blackpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_ground_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaF_blackpattern_co.paa"
		};
	};
	class BandanaMask_polkapattern: BandanaMaskBase
	{
		scope=2;
		displayName="Face mask Polka Dot";
		color="polkapattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_g_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaF_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaF_karkulka_co.paa"
		};
	};
	class BandanaMask_greenpattern: BandanaMaskBase
	{
		scope=2;
		displayName="Face mask Green Pattern";
		color="greenpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa"
		};
	};
	class BandanaMask_camopattern: BandanaMaskBase
	{
		scope=2;
		displayName="Face mask Camo Pattern";
		color="camopattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa"
		};
	};
	class NioshFaceMask: MaskBase
	{
		scope=2;
		displayName="Respirator";
		descriptionShort="A respirator is a device designed to protect the wearer from inhaling harmful dusts, fumes, vapors, or gases.";
		itemSize[]={1,1};
		lootTag[]=
		{
			"Civilian"
		};
		model="\DZ\characters\masks\NioshFaceMask_g.p3d";
		weight=340;
		class ClothingTypes
		{
			male="\DZ\characters\masks\NioshFaceMask_m.p3d";
			female="\DZ\characters\masks\NioshFaceMask_f.p3d";
		};
		class DamageArmor
		{
			biological=0.80000001;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\NioshFaceMask.rvmat",
				"DZ\characters\masks\data\NioshFaceMask_damage.rvmat",
				"DZ\characters\masks\data\NioshFaceMask_destruct.rvmat"
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
			"\DZ\characters\masks\data\NioshFaceMask_co.paa",
			"\DZ\characters\masks\data\NioshFaceMask_co.paa",
			"\DZ\characters\masks\data\NioshFaceMask_co.paa"
		};
	};
	class BalaclavaMaskBase: MaskBase
	{
		scope=0;
		absorbency=0.89999998;
		heatIsolation=0.80000001;
		displayName="Balaclava";
		descriptionShort="Balaclava is also known as a ski mask, is a form of cloth headgear designed to expose only part of the face.";
		itemSize[]={1,1};
		lootTag[]=
		{
			"Civilian",
			"Police",
			"Military"
		};
		ragQuantity=1;
		weight=130;
		repairableWith=2;
		model="\DZ\characters\masks\Balaclava_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\masks\Balaclava_m.p3d";
			female="\DZ\characters\masks\Balaclava_f.p3d";
		};
		class DamageArmor
		{
			biological=0.5;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\Balaclava.rvmat",
				"DZ\characters\masks\data\Balaclava_damage.rvmat",
				"DZ\characters\masks\data\Balaclava_destruct.rvmat"
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
			"\DZ\characters\masks\data\Balaclava_black_co.paa",
			"\DZ\characters\masks\data\Balaclava_black_co.paa",
			"\DZ\characters\masks\data\Balaclava_black_co.paa"
		};
	};
	class BalaclavaMask_Black: BalaclavaMaskBase
	{
		scope=2;
		displayName="Black Balaclava";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Black_co.paa",
			"DZ\characters\masks\data\Balaclava_Black_co.paa",
			"DZ\characters\masks\data\Balaclava_Black_co.paa"
		};
	};
	class BalaclavaMask_Blackskull: BalaclavaMaskBase
	{
		scope=2;
		displayName="Blackskull Balaclava";
		color="Blackskull";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Blackskull_co.paa",
			"DZ\characters\masks\data\Balaclava_Blackskull_co.paa",
			"DZ\characters\masks\data\Balaclava_Blackskull_co.paa"
		};
	};
	class BalaclavaMask_Beige: BalaclavaMaskBase
	{
		scope=2;
		displayName="Beige Balaclava";
		color="Beige";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Beige_co.paa",
			"DZ\characters\masks\data\Balaclava_Beige_co.paa",
			"DZ\characters\masks\data\Balaclava_Beige_co.paa"
		};
	};
	class BalaclavaMask_Blue: BalaclavaMaskBase
	{
		scope=2;
		displayName="Blue Balaclava";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Blue_co.paa",
			"DZ\characters\masks\data\Balaclava_Blue_co.paa",
			"DZ\characters\masks\data\Balaclava_Blue_co.paa"
		};
	};
	class BalaclavaMask_Green: BalaclavaMaskBase
	{
		scope=2;
		displayName="Green Balaclava";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Green_co.paa",
			"DZ\characters\masks\data\Balaclava_Green_co.paa",
			"DZ\characters\masks\data\Balaclava_Green_co.paa"
		};
	};
	class BalaclavaMask_Pink: BalaclavaMaskBase
	{
		scope=2;
		displayName="Pink Balaclava";
		color="Pink";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_Pink_co.paa",
			"DZ\characters\masks\data\Balaclava_Pink_co.paa",
			"DZ\characters\masks\data\Balaclava_Pink_co.paa"
		};
	};
	class BalaclavaMask_White: BalaclavaMaskBase
	{
		scope=2;
		displayName="White Balaclava";
		color="White";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaclava_White_co.paa",
			"DZ\characters\masks\data\Balaclava_White_co.paa",
			"DZ\characters\masks\data\Balaclava_White_co.paa"
		};
	};
	class DallasMask: MaskBase
	{
		scope=2;
		displayName="Dallas mask";
		descriptionShort="A carnival mask popular among the children of Chernarus. Most commonly worn during the end of harvest festivities.";
		itemSize[]={1,2};
		noHelmet=1;
		lootTag[]=
		{
			"Civilian"
		};
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Headgear') >> 'noMask') == 0)";
		model="\DZ\characters\masks\DallasMask_g.p3d";
		weight=350;
		class ClothingTypes
		{
			male="\DZ\characters\masks\DallasMask_m.p3d";
			female="\DZ\characters\masks\DallasMask_f.p3d";
		};
		class DamageArmor
		{
			biological=0.2;
			bleed=0.1;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\Dallas_Mask.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_damage.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_destruct.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"
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
			"\DZ\characters\masks\data\Dallas_Mask_co.paa",
			"\DZ\characters\masks\data\Dallas_Mask_co.paa",
			"\DZ\characters\masks\data\Dallas_Mask_co.paa"
		};
	};
	class HoxtonMask: MaskBase
	{
		scope=2;
		displayName="Hoxton Mask";
		descriptionShort="A carnival mask popular among the children of Chernarus. Most commonly worn during the end of harvest festivities.";
		itemSize[]={1,2};
		noHelmet=1;
		lootTag[]=
		{
			"Civilian"
		};
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Headgear') >> 'noMask') == 0)";
		model="\DZ\characters\masks\HoxtonMask_g.p3d";
		weight=320;
		class ClothingTypes
		{
			male="\DZ\characters\masks\HoxtonMask_m.p3d";
			female="\DZ\characters\masks\HoxtonMask_f.p3d";
		};
		class DamageArmor
		{
			biological=0.2;
			bleed=0.1;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\Hoxton_Mask.rvmat",
				"DZ\characters\masks\data\Hoxton_Mask_damage.rvmat",
				"DZ\characters\masks\data\Hoxton_Mask_destruct.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"
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
			"\DZ\characters\masks\data\Hoxton_Mask_co.paa",
			"\DZ\characters\masks\data\Hoxton_Mask_co.paa",
			"\DZ\characters\masks\data\Hoxton_Mask_co.paa"
		};
	};
	class WolfMask: MaskBase
	{
		scope=2;
		displayName="Wolf Mask";
		descriptionShort="A carnival mask popular among the children of Chernarus. Most commonly worn during the end of harvest festivities.";
		itemSize[]={1,2};
		weight=360;
		noHelmet=1;
		lootTag[]=
		{
			"Civilian"
		};
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Headgear') >> 'noMask') == 0)";
		model="\DZ\characters\masks\WolfMask_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\masks\WolfMask_m.p3d";
			female="\DZ\characters\masks\WolfMask_f.p3d";
		};
		class DamageArmor
		{
			biological=0.2;
			bleed=0.1;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\Wolf_Mask.rvmat",
				"DZ\characters\masks\data\Wolf_Mask_damage.rvmat",
				"DZ\characters\masks\data\Wolf_Mask_destruct.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_damage.rvmat",
				"DZ\characters\masks\data\Dallas_Mask_inside_destruct.rvmat"
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
			"\DZ\characters\masks\data\Wolf_Mask_co.paa",
			"\DZ\characters\masks\data\Wolf_Mask_co.paa",
			"\DZ\characters\masks\data\Wolf_Mask_co.paa"
		};
	};
	class GP5GasMask: MaskBase
	{
		scope=2;
		displayName="GP5 Gas Mask";
		descriptionShort="A full face mask with sealed glass eye pieces, designed to protect the user from airborne pollutants.";
		model="\DZ\characters\masks\GP5GasMask_g.p3d";
		itemSize[]={1,2};
		weight=1090;
		absorbency=0;
		heatIsolation=0.80000001;
		lootTag[]=
		{
			"Firefighters",
			"Military",
			"Work"
		};
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Headgear') >> 'noMask') == 0)";
		noHelmet=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa",
			"\dz\characters\masks\data\GP5GasMask_white_co.paa",
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\GP5GasMask_m.p3d";
			female="\DZ\characters\masks\GP5GasMask_f.p3d";
		};
		class DamageArmor
		{
			biological=1;
			bleed=0.30000001;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\GP5GasMask.rvmat",
				"DZ\characters\masks\data\GP5GasMask_damage.rvmat",
				"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"
			};
		};
	};
};
