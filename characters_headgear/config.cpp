class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[]=
		{
			"BaseballCap_Blue",
			"BaseballCap_Beige",
			"BaseballCap_Black",
			"BaseballCap_Olive",
			"BaseballCap_Pink",
			"BaseballCap_Red",
			"BaseballCap_Camo",
			"BaseballCap_CMMG_Black",
			"BaseballCap_CMMG_Pink",
			"MotoHelmet_Black",
			"MotoHelmet_Blue",
			"MotoHelmet_Green",
			"MotoHelmet_Red",
			"MotoHelmet_White",
			"Headtorch_Grey",
			"CowboyHat_Brown",
			"CowboyHat_black",
			"CowboyHat_darkBrown",
			"CowboyHat_green",
			"BoonieHat_black",
			"BoonieHat_Blue",
			"BoonieHat_DPM",
			"BoonieHat_dubok",
			"BoonieHat_flecktran",
			"BoonieHat_NavyBlue",
			"BoonieHat_olive",
			"BoonieHat_orange",
			"BoonieHat_red",
			"BoonieHat_Tan",
			"FlatCap_Black",
			"FlatCap_Grey",
			"FlatCap_Brown",
			"FlatCap_Blue",
			"FlatCap_Red",
			"FlatCap_Check_Black",
			"FlatCap_Check_Brown",
			"FlatCap_Check_Grey",
			"GhillieHoodWoodland"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class DefaultAction;
class ActionOnSelf;
class ActionOnTarget;
class CfgVehicles
{
	class HeadgearBase;
	class BallisticHelmetBase: HeadgearBase
	{
		scope=0;
		descriptionShort="Combat helmet designed specifically to protect the head during combat situations. Made from Aramid with an excellent shock absorption system and quick-release catch.";
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.13;
		lootTag[]=
		{
			"Military",
			"Military_east"
		};
		noMask=1;
		weight=1000;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		model="\DZ\characters\headgear\HelmetMich_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\HelmetMich.rvmat",
				"DZ\characters\headgear\data\HelmetMich_damage.rvmat",
				"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"
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
			biological=0.2;
			ballistic=1.5;
			bleed=0.89999998;
			shock=10000;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HelmetMich.p3d";
			female="\DZ\characters\headgear\HelmetMich.p3d";
		};
	};
	class BallisticHelmet: BallisticHelmetBase
	{
		scope=2;
		displayName="Ballistic Helmet";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa"
		};
	};
	class BallisticHelmet_Green: BallisticHelmetBase
	{
		scope=2;
		displayName="Green Ballistic Helmet";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa",
			"dz\characters\headgear\data\helmetmich_co.paa"
		};
	};
	class BallisticHelmet_Black: BallisticHelmetBase
	{
		scope=2;
		displayName="Black Ballistic Helmet";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_bk_co.paa",
			"dz\characters\headgear\data\helmetmich_bk_co.paa",
			"dz\characters\headgear\data\helmetmich_bk_co.paa"
		};
	};
	class BallisticHelmet_UN: BallisticHelmetBase
	{
		scope=2;
		weight=980;
		displayName="UN Ballistic Helmet";
		lootTag[]=
		{
			"Military_west"
		};
		descriptionShort="A combat helmet in colors of United Nations designed specifically to protect the head during combat situations. Made from Aramid with an excellent shock absorption system and quick-release catch.";
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\helmetmich_un_co.paa",
			"dz\characters\headgear\data\helmetmich_un_co.paa",
			"dz\characters\headgear\data\helmetmich_un_co.paa"
		};
	};
	class BaseballCapBase: HeadgearBase
	{
		absorbency=0.80000001;
		heatIsolation=1.04;
		scope=0;
		displayName="Baseball Cap";
		descriptionShort="Common polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		repairableWith=2;
		lootTag[]=
		{
			"Civilian"
		};
		model="\DZ\characters\headgear\BaseballCap_ground.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\BaseballCapII.rvmat",
				"DZ\characters\headgear\data\BaseballCapII_damage.rvmat",
				"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"
			};
		};
		weight=110;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BaseballCap_m.p3d";
			female="\DZ\characters\headgear\BaseballCap_f.p3d";
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
	class BaseballCap_Blue: BaseballCapBase
	{
		scope=2;
		displayName="Blue Baseball Cap";
		descriptionShort="Blue polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa"
		};
	};
	class BaseballCap_Beige: BaseballCapBase
	{
		scope=2;
		displayName="Beige Baseball Cap";
		descriptionShort="Beige polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa"
		};
	};
	class BaseballCap_Black: BaseballCapBase
	{
		scope=2;
		displayName="Black Baseball Cap";
		descriptionShort="Black polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa"
		};
	};
	class BaseballCap_Olive: BaseballCapBase
	{
		scope=2;
		displayName="Olive Baseball Cap";
		descriptionShort="Olive polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa"
		};
	};
	class BaseballCap_Pink: BaseballCapBase
	{
		scope=2;
		displayName="Pink Baseball Cap";
		descriptionShort="Pink polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa"
		};
	};
	class BaseballCap_Red: BaseballCapBase
	{
		scope=2;
		displayName="Red Baseball Cap";
		descriptionShort="Red polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa"
		};
	};
	class BaseballCap_Camo: BaseballCapBase
	{
		scope=2;
		displayName="Camo Baseball Cap";
		descriptionShort="Camo pattern, polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa"
		};
	};
	class BaseballCap_CMMG_Black: BaseballCapBase
	{
		scope=2;
		displayName="Black Baseball Cap";
		descriptionShort="Black polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. Features a CMMG arms manufacturer logo. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
		};
	};
	class BaseballCap_CMMG_Pink: BaseballCapBase
	{
		scope=2;
		displayName="Pink Baseball Cap";
		descriptionShort="Pink polyester baseball cap with a curved bill and rounded crown. It is effective at shielding the eyes from the sun or as a fashion accessory. Features a CMMG arms manufacturer logo. One size fits all.";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
		};
	};
	class PilotHelmet_ZSh3: HeadgearBase
	{
		scope=2;
		absorbency=0;
		heatIsolation=1.1;
		displayName="ZSh3 Pilot Helmet";
		descriptionShort="The ZSh-3 Pilot Helmet was first introduced in the early 1960's and is used in virtually every type of Soviet-made aircraft - from the MiG-17 to the MiG-29, from the Il-76 cargo plane to the Mi-24 Attack Helicopter.  This is the most widely used flight helmet in the world.";
		lootTag[]=
		{
			"Military",
			"Military_east"
		};
		model="\DZ\characters\headgear\HeloHelmet_ground.p3d";
		itemSize[]={2,2};
		noMask=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		weight=1450;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\HeloHelmet.rvmat",
				"DZ\characters\headgear\data\HeloHelmet_damage.rvmat",
				"DZ\characters\headgear\data\HeloHelmet_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeloHelmet.p3d";
			female="\DZ\characters\headgear\HeloHelmet.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_co.paa"
		};
		class DamageArmor
		{
			biological=0.2;
			ballistic=0.69999999;
			bleed=0.89999998;
			shock=3000;
		};
	};
	class PilotHelmet_ZSh3_green: PilotHelmet_ZSh3
	{
		scope=1;
		displayName="Green ZSh3 Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_green_co.paa"
		};
	};
	class PilotHelmet_ZSh3_black: PilotHelmet_ZSh3
	{
		scope=1;
		displayName="Black ZSh3 Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa",
			"\DZ\characters\headgear\data\HeloHelmet_black_co.paa"
		};
	};
	class ConstructionHelmetBase: HeadgearBase
	{
		scope=0;
		displayName="Hard Hat";
		absorbency=0;
		heatIsolation=0.89999998;
		lootTag[]=
		{
			"Work"
		};
		descriptionShort="A type of helmet predominantly used in workplace environments, such as construction sites, to protect the head from injury by falling objects, impact with other objects, debris, bad weather and electric shock.";
		model="\DZ\characters\headgear\ConstructionHelmet_g.p3d";
		itemSize[]={2,2};
		noMask=1;
		weight=470;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ConstructionHelmet.p3d";
			female="\DZ\characters\headgear\ConstructionHelmet.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\ConstructionHelmet.rvmat",
				"DZ\characters\headgear\data\ConstructionHelmet_damage.rvmat",
				"DZ\characters\headgear\data\ConstructionHelmet_destruct.rvmat"
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
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa",
			"\DZ\characters\headgear\data\ConstructionHelmet_blue_co.paa"
		};
		class DamageArmor
		{
			ballistic=0.40000001;
			bleed=1;
			shock=5000;
		};
	};
	class ConstructionHelmet_Blue: ConstructionHelmetBase
	{
		scope=2;
		displayName="Blue Hard Hat";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_Blue_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Blue_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Blue_co.paa"
		};
	};
	class ConstructionHelmet_Lime: ConstructionHelmetBase
	{
		scope=2;
		displayName="Lime Hard Hat";
		color="Lime";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_Lime_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Lime_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Lime_co.paa"
		};
	};
	class ConstructionHelmet_Orange: ConstructionHelmetBase
	{
		scope=2;
		displayName="Orange Hard Hat";
		color="Orange";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_Orange_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Orange_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Orange_co.paa"
		};
	};
	class ConstructionHelmet_Red: ConstructionHelmetBase
	{
		scope=2;
		displayName="Red Hard Hat";
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_Red_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Red_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Red_co.paa"
		};
	};
	class ConstructionHelmet_White: ConstructionHelmetBase
	{
		scope=2;
		displayName="White Hard Hat";
		color="White";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_White_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_White_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_White_co.paa"
		};
	};
	class ConstructionHelmet_Yellow: ConstructionHelmetBase
	{
		scope=2;
		displayName="Yellow Hard Hat";
		color="Yellow";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ConstructionHelmet_Yellow_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Yellow_co.paa",
			"DZ\characters\headgear\data\ConstructionHelmet_Yellow_co.paa"
		};
	};
	class Cover_BurlapSack: HeadgearBase
	{
		scope=2;
		displayName="$STR_ITEMS_BURLAPSACK";
		absorbency=1;
		heatIsolation=2;
		repairableWith=2;
		descriptionShort="$STR_ITEMS_BURLAPSACK_DESC";
		model="\dz\characters\headgear\Head_sack_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\Head_Sack.rvmat",
				"DZ\characters\headgear\data\Head_Sack_damage.rvmat",
				"DZ\characters\headgear\data\Head_Sack_destruct.rvmat"
			};
		};
		handheld="false";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Head_sack.p3d";
			female="\DZ\characters\headgear\Head_sack.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\head_sack_co.paa",
			"dz\characters\headgear\data\head_sack_co.paa",
			"dz\characters\headgear\data\head_sack_co.paa"
		};
		inventoryCondition="isNull itemParent _this";
		class DamageArmor
		{
			bleed=0.1;
			shock=0;
		};
		weight=510;
		rotateDropped=1;
		rotateAlways=1;
		class UserActions
		{
			class RemoveHeadSelf: DefaultAction
			{
				displayNameDefault="Remove Head Cover";
				displayName="Remove Head Cover";
				statement="[(itemParent this),false] call player_coverHead;deleteVehicle this;_newit=['Crafting_Burlapsack',_person] call player_addInventory;";
			};
		};
	};
	class BeanieHatBase: HeadgearBase
	{
		absorbency=0.80000001;
		heatIsolation=1.04;
		scope=0;
		model="\DZ\characters\headgear\BeanieHat_ground.p3d";
		repairableWith=2;
		weight=90;
		lootTag[]=
		{
			"Work",
			"Civilian",
			"Farm",
			"Hunting"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\BeanieHat.rvmat",
				"DZ\characters\headgear\data\BeanieHat_damage.rvmat",
				"DZ\characters\headgear\data\BeanieHat_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BeanieHat_m.p3d";
			female="\DZ\characters\headgear\BeanieHat_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageArmor
		{
			bleed=0.15000001;
			shock=50;
		};
	};
	class BeanieHatBeige: BeanieHatBase
	{
		scope=2;
		displayName="Beige Beanie Hat";
		descriptionShort="Designed to provide warmth, this beige coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_beige_co.paa"
		};
	};
	class BeanieHatBlack: BeanieHatBeige
	{
		scope=2;
		displayName="Black Beanie Hat";
		descriptionShort="Designed to provide warmth, this black, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_black_co.paa"
		};
	};
	class BeanieHatBlue: BeanieHatBeige
	{
		scope=2;
		displayName="Blue Beanie Hat";
		descriptionShort="Designed to provide warmth, this blue coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_blue_co.paa"
		};
	};
	class BeanieHatBrown: BeanieHatBeige
	{
		scope=2;
		displayName="Brown Beanie Hat";
		descriptionShort="Designed to provide warmth, this brown coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_brown_co.paa"
		};
	};
	class BeanieHatGreen: BeanieHatBeige
	{
		scope=2;
		displayName="Green Beanie Hat";
		descriptionShort="Designed to provide warmth, this green coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_green_co.paa"
		};
	};
	class BeanieHatGrey: BeanieHatBeige
	{
		scope=2;
		displayName="Grey Beanie Hat";
		descriptionShort="Designed to provide warmth, this two tone grey coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_grey_co.paa"
		};
	};
	class BeanieHatPink: BeanieHatBeige
	{
		scope=2;
		displayName="Pink Beanie Hat";
		descriptionShort="Designed to provide warmth, this pink coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_pink_co.paa"
		};
	};
	class BeanieHatRed: BeanieHatBeige
	{
		scope=2;
		displayName="Red Beanie Hat";
		descriptionShort="Designed to provide warmth, this red coloured, head-hugging piece of headgear is made from knitted wool or synthetic fibers. It is also known as a Knit Cap.";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa",
			"\DZ\characters\headgear\data\BeanieHat_red_co.paa"
		};
	};
	class UshankaBase: HeadgearBase
	{
		absorbency=0.80000001;
		heatIsolation=1.1;
		scope=0;
		weight=320;
		displayName="Ushanka";
		descriptionShort="A classic Russian hat made from black dyed animal or artificial fur with ear flaps to protect against the cold. It is also known as a trooper or trapper's hat.";
		lootTag[]=
		{
			"Work",
			"Civilian",
			"Farm",
			"Hunting"
		};
		model="\DZ\characters\headgear\ushanka_ground.p3d";
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ushanka_m.p3d";
			female="\DZ\characters\headgear\ushanka_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\Ushanka.rvmat",
				"DZ\characters\headgear\data\Ushanka_damage.rvmat",
				"DZ\characters\headgear\data\Ushanka_destruct.rvmat"
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
			bleed=0.2;
			shock=50;
		};
	};
	class Ushanka_Black: UshankaBase
	{
		scope=2;
		displayName="Black Ushanka";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\Ushanka_Black_co.paa",
			"DZ\characters\headgear\data\Ushanka_Black_co.paa",
			"DZ\characters\headgear\data\Ushanka_Black_co.paa"
		};
	};
	class Ushanka_Blue: UshankaBase
	{
		scope=2;
		displayName="Blue Ushanka";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\Ushanka_Blue_co.paa",
			"DZ\characters\headgear\data\Ushanka_Blue_co.paa",
			"DZ\characters\headgear\data\Ushanka_Blue_co.paa"
		};
	};
	class Ushanka_Green: UshankaBase
	{
		scope=2;
		displayName="Green Ushanka";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\Ushanka_Green_co.paa",
			"DZ\characters\headgear\data\Ushanka_Green_co.paa",
			"DZ\characters\headgear\data\Ushanka_Green_co.paa"
		};
	};
	class MotoHelmet: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=1.2;
		displayName="Motobike Helmet";
		lootTag[]=
		{
			"Work",
			"Civilian"
		};
		descriptionShort="A protective helmet worn by motorcycle riders consisting of a hard outer shell of fiberglass reinforced with Kevlar and a thick inside cushion of fabric and foam.";
		itemSize[]={3,3};
		noMask=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		weight=1210;
		model="\DZ\characters\headgear\MotoHelmet_ground.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MotoHelmet.p3d";
			female="\DZ\characters\headgear\MotoHelmet.p3d";
		};
		class DamageArmor
		{
			ballistic=0.2;
			biological=0.30000001;
			shock=7000;
			bleed=0.69999999;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]={};
	};
	class MotoHelmetBase: MotoHelmet
	{
		scope=0;
	};
	class MotoHelmetDarkBase: MotoHelmet
	{
		scope=0;
	};
	class MotoHelmet_Black: MotoHelmetBase
	{
		scope=2;
		displayName="Black Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Black_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Black: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Black Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Black_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_Grey: MotoHelmetBase
	{
		scope=2;
		displayName="Grey Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Grey_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Grey: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Grey Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Grey_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_Green: MotoHelmetBase
	{
		scope=2;
		displayName="Green Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Green_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Green: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Green Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Green_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_Lime: MotoHelmetBase
	{
		scope=2;
		displayName="Lime Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Lime_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Lime: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Lime Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Lime_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_Blue: MotoHelmetBase
	{
		scope=2;
		displayName="Blue Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Blue_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Blue: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Blue Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Blue_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_Red: MotoHelmetBase
	{
		scope=2;
		displayName="Red Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Red_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_Red: MotoHelmetDarkBase
	{
		scope=2;
		displayName="Red Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_Red_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class MotoHelmet_White: MotoHelmetBase
	{
		scope=2;
		displayName="White Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_White_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_destruct.rvmat"
			};
		};
	};
	class MotoHelmetDark_White: MotoHelmetDarkBase
	{
		scope=2;
		displayName="White Motobike Helmet";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\MotoHelmet_White_co.paa",
			"DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\headgear\data\MotoHelmet.rvmat",
			"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MotoHelmet.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmet_destruct.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_damage.rvmat",
				"DZ\characters\headgear\data\MotoHelmetVisor_nontrans_destruct.rvmat"
			};
		};
	};
	class HeadtorchBase: HeadgearBase
	{
		scope=0;
		absorbency=0;
		displayName="Headtorch";
		descriptionShort="A convenient battery powered LED lamp that affixes to the head utilizing two adjustable straps to secure it in place.";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		lootTag[]=
		{
			"Work",
			"Civilian",
			"Hunting",
			"Military_east",
			"Military_west"
		};
		repairableWith=0;
		weight=200;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\HeadTorch.rvmat",
				"DZ\characters\headgear\data\HeadTorch_damage.rvmat",
				"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		class EventHandlers
		{
			PowerOn="(_this select 0) switchLight 'ON';itemParent (_this select 0) say3D 'flashlight_switch_on';";
			PowerOff="(_this select 0) switchLight 'OFF';itemParent (_this select 0) say3D 'flashlight_switch_off';";
		};
		attachments[]=
		{
			"BatteryD"
		};
		energyResources[]=
		{
			
			{
				"power",
				8
			}
		};
		class Reflectors
		{
			class Beam
			{
				color[]={3,3,2.5,0};
				ambient[]={0,0,0,0};
				position="beamStart";
				direction="beamEnd";
				hitpoint="bulb";
				selection="bulb";
				size=0;
				radius=25;
				angle=40;
				dayLight=1;
				angleInnerRatio=0.25;
			};
		};
		class UserActions
		{
			class TurnOn
			{
				displayNameDefault="Turn Off";
				displayName="Turn Off";
				position="action";
				radius=1;
				onlyForPlayer=0;
				condition="isOn this;";
				statement="this powerOn false";
			};
			class TurnOff
			{
				displayNameDefault="Turn On";
				displayName="Turn On";
				position="action";
				radius=1;
				onlyForPlayer=0;
				condition="!isOn this";
				statement="this powerOn true";
			};
		};
	};
	class Headtorch_Grey: HeadtorchBase
	{
		scope=2;
		displayName="Grey Headtorch";
		class EventHandlers
		{
			PowerOn="(_this select 0) switchLight 'ON';itemParent (_this select 0) say3D 'flashlight_switch_on';(_this select 0) setObjectMaterial [0,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];(_this select 0) setObjectMaterial [1,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];(_this select 0) setObjectMaterial [2,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];";
			PowerOff="(_this select 0) switchLight 'OFF';itemParent (_this select 0) say3D 'flashlight_switch_off';(_this select 0) setObjectMaterial [0,'DZ\characters\headgear\data\HeadTorch.rvmat'];(_this select 0) setObjectMaterial [1,'DZ\characters\headgear\data\HeadTorch.rvmat'];(_this select 0) setObjectMaterial [2,'DZ\characters\headgear\data\HeadTorch.rvmat'];";
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\headtorch_Grey_co.paa",
			"\dz\characters\headgear\data\headtorch_Grey_co.paa",
			"\dz\characters\headgear\data\headtorch_Grey_co.paa"
		};
	};
	class Headtorch_Black: HeadtorchBase
	{
		scope=2;
		displayName="Black Headtorch";
		class EventHandlers
		{
			PowerOn="(_this select 0) switchLight 'ON';itemParent (_this select 0) say3D 'flashlight_switch_on';(_this select 0) setObjectMaterial [0,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];(_this select 0) setObjectMaterial [1,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];(_this select 0) setObjectMaterial [2,'DZ\characters\headgear\data\HeadTorch_ON.rvmat'];";
			PowerOff="(_this select 0) switchLight 'OFF';itemParent (_this select 0) say3D 'flashlight_switch_off';(_this select 0) setObjectMaterial [0,'DZ\characters\headgear\data\HeadTorch.rvmat'];(_this select 0) setObjectMaterial [1,'DZ\characters\headgear\data\HeadTorch.rvmat'];(_this select 0) setObjectMaterial [2,'DZ\characters\headgear\data\HeadTorch.rvmat'];";
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\headtorch_black_co.paa",
			"\dz\characters\headgear\data\headtorch_black_co.paa",
			"\dz\characters\headgear\data\headtorch_black_co.paa"
		};
	};
	class BandanaBase: HeadgearBase
	{
		absorbency=0.89999998;
		heatIsolation=0.80000001;
		scope=0;
		displayName="Bandana Cap";
		descriptionShort="A hat styled to look like a bandana. Easy fix for higher badass index.";
		lootTag[]=
		{
			"Civilian"
		};
		repairableWith=2;
		color="Black";
		weight=120;
		model="\DZ\characters\headgear\Bandana_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\Bandana.rvmat",
				"DZ\characters\headgear\data\Bandana_damage.rvmat",
				"DZ\characters\headgear\data\Bandana_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Bandana_m.p3d";
			female="\DZ\characters\headgear\Bandana_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]={};
		ragQuantity=2;
		class DamageArmor
		{
			bleed=0.1;
		};
	};
	class BandanaUntieableBase: BandanaBase
	{
		scope=0;
		absorbency=0.89999998;
		displayName="Bandana";
		descriptionShort="A bandana tied to a improvised hat. Can be untied and used for other things.";
		model="\DZ\characters\headgear\BandanaHead_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\BandanaH.rvmat",
				"DZ\characters\headgear\data\BandanaH_damage.rvmat",
				"DZ\characters\headgear\data\BandanaH_destruct.rvmat"
			};
		};
		ragQuantity=1;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BandanaHead_m.p3d";
			female="\DZ\characters\headgear\BandanaHead_f.p3d";
		};
	};
	class Bandana_redpattern: BandanaUntieableBase
	{
		scope=2;
		displayName="Bandana Red Pattern";
		color="redpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_ground_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_redpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_redpattern_co.paa"
		};
	};
	class Bandana_blackpattern: BandanaUntieableBase
	{
		scope=2;
		displayName="Bandana Black Pattern";
		color="blackpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_ground_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_blackpattern_co.paa",
			"DZ\characters\headgear\data\BandanaH_blackpattern_co.paa"
		};
	};
	class Bandana_polkapattern: BandanaUntieableBase
	{
		scope=2;
		displayName="Bandana Polka Dot";
		color="polkapattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFH_g_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaH_karkulka_co.paa",
			"DZ\characters\headgear\data\BandanaH_karkulka_co.paa"
		};
	};
	class Bandana_greenpattern: BandanaUntieableBase
	{
		scope=2;
		displayName="Bandana Green Pattern";
		color="greenpattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_olive_co.paa"
		};
	};
	class Bandana_camopattern: BandanaUntieableBase
	{
		scope=2;
		displayName="Bandana Camo Pattern";
		color="camopattern";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa",
			"DZ\characters\headgear\data\BandanaFHG_TTsKO_co.paa"
		};
	};
	class RadarCapBase: HeadgearBase
	{
		absorbency=0.60000002;
		heatIsolation=0.94999999;
		scope=0;
		displayName="Radar Cap";
		lootTag[]=
		{
			"Civilian"
		};
		descriptionShort="A worm hat that covers most of the head, including ears and forehead.";
		itemSize[]={2,1};
		repairableWith=2;
		model="\DZ\characters\headgear\RadarCap_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\RadarCap.rvmat",
				"DZ\characters\headgear\data\RadarCap_damage.rvmat",
				"DZ\characters\headgear\data\RadarCap_destruct.rvmat"
			};
		};
		weight=160;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\RadarCap_m.p3d";
			female="\DZ\characters\headgear\RadarCap_f.p3d";
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
			shock=30;
			bleed=0.1;
		};
	};
	class RadarCap_Black: RadarCapBase
	{
		scope=2;
		displayName="Black Radar Cap";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_Black_co.paa",
			"DZ\characters\headgear\data\RadarCap_Black_co.paa",
			"DZ\characters\headgear\data\RadarCap_Black_co.paa"
		};
	};
	class RadarCap_Blue: RadarCapBase
	{
		scope=2;
		displayName="Blue Radar Cap";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_Blue_co.paa",
			"DZ\characters\headgear\data\RadarCap_Blue_co.paa",
			"DZ\characters\headgear\data\RadarCap_Blue_co.paa"
		};
	};
	class RadarCap_Brown: RadarCapBase
	{
		scope=2;
		displayName="Brown Radar Cap";
		color="Brown";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_Brown_co.paa",
			"DZ\characters\headgear\data\RadarCap_Brown_co.paa",
			"DZ\characters\headgear\data\RadarCap_Brown_co.paa"
		};
	};
	class RadarCap_Green: RadarCapBase
	{
		scope=2;
		displayName="Green Radar Cap";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_Green_co.paa",
			"DZ\characters\headgear\data\RadarCap_Green_co.paa",
			"DZ\characters\headgear\data\RadarCap_Green_co.paa"
		};
	};
	class RadarCap_Red: RadarCapBase
	{
		scope=2;
		displayName="Red Radar Cap";
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\RadarCap_Red_co.paa",
			"DZ\characters\headgear\data\RadarCap_Red_co.paa",
			"DZ\characters\headgear\data\RadarCap_Red_co.paa"
		};
	};
	class MilitaryBeretBase: HeadgearBase
	{
		scope=0;
		absorbency=0.69999999;
		heatIsolation=0.94999999;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		repairableWith=2;
		weight=230;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageArmor
		{
			bleed=0.1;
			shock=20;
		};
	};
	class MilitaryBeret: MilitaryBeretBase
	{
		scope=2;
		displayName="Military Beret";
		descriptionShort="A red beret, commonly worn by military forces. It doesn't offer much protection.";
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MilitaryBeret.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_red_co.paa"
		};
	};
	class MilitaryBeretUN: MilitaryBeretBase
	{
		scope=2;
		displayName="UN Military Beret";
		descriptionShort="A light blue beret, it has a United Nations cap badge on it. It doesn't offer much protection.";
		model="\DZ\characters\headgear\MilitaryBeret_UN_g.p3d";
		lootTag[]=
		{
			"Military_west"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_UN_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_UN_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MilitaryBeret.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_blue_co.paa"
		};
	};
	class MilitaryBeretNZ: MilitaryBeretBase
	{
		scope=2;
		displayName="New Zealand Military Beret";
		descriptionShort="A green beret, it has a New Zealand cap badge on it. It doesn't offer much protection.";
		lootTag[]=
		{
			"Military_west"
		};
		model="\DZ\characters\headgear\MilitaryBeret_NZ_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_NZ_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_NZ_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MilitaryBeret.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"
		};
	};
	class MilitaryBeretChDKZ: MilitaryBeretBase
	{
		scope=2;
		displayName="Chernarussian Movement of the Red Star Military Beret";
		lootTag[]=
		{
			"Military",
			"Military_east"
		};
		descriptionShort="A black beret, it has a Chernarussian Red Star cap badge on it. It doesn't offer much protection.";
		model="\DZ\characters\headgear\MilitaryBeret_ChDKZ_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_ChDKZ_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_ChDKZ_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MilitaryBeret.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_black_co.paa"
		};
	};
	class MilitaryBeretCDF: MilitaryBeretBase
	{
		scope=2;
		displayName="Chernarussian Defence Forces Military Beret";
		lootTag[]=
		{
			"Military",
			"Military_east"
		};
		descriptionShort="A green beret, it has a Chernarussian Defence force cap badge on it. It doesn't offer much protection.";
		model="\DZ\characters\headgear\MilitaryBeret_CDF_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_CDF_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_CDF_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MilitaryBeret.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_damage.rvmat",
				"DZ\characters\headgear\data\MilitaryBeret_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa",
			"\DZ\characters\headgear\data\MilitaryBeret_green_co.paa"
		};
	};
	class FlatCapBase: HeadgearBase
	{
		absorbency=0.69999999;
		heatIsolation=0.94999999;
		scope=0;
		displayName="Flat Cap";
		descriptionShort="Never gets out of style.";
		lootTag[]=
		{
			"Civilian"
		};
		itemSize[]={1,1};
		repairableWith=2;
		model="\DZ\characters\headgear\FlatCap_g.p3d";
		weight=240;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\FlatCap.rvmat",
				"DZ\characters\headgear\data\FlatCap_damage.rvmat",
				"DZ\characters\headgear\data\FlatCap_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\FlatCap.p3d";
			female="\DZ\characters\headgear\FlatCap.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_black_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_co.paa"
		};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
	};
	class FlatCap_Black: FlatCapBase
	{
		scope=2;
		displayName="Black Flat Cap";
	};
	class FlatCap_Blue: FlatCapBase
	{
		scope=2;
		displayName="Blue Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa",
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa",
			"\DZ\characters\headgear\data\FlatCap_blue_co.paa"
		};
	};
	class FlatCap_Red: FlatCapBase
	{
		scope=2;
		displayName="Red Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_red_co.paa",
			"\DZ\characters\headgear\data\FlatCap_red_co.paa",
			"\DZ\characters\headgear\data\FlatCap_red_co.paa"
		};
	};
	class FlatCap_Brown: FlatCapBase
	{
		scope=2;
		displayName="Brown Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_co.paa"
		};
	};
	class FlatCap_Grey: FlatCapBase
	{
		scope=2;
		displayName="Grey Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_co.paa"
		};
	};
	class FlatCap_Check_Brown: FlatCapBase
	{
		scope=2;
		displayName="Brown Check Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_brown_check_co.paa"
		};
	};
	class FlatCap_Check_Grey: FlatCapBase
	{
		scope=2;
		displayName="Grey Check Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_grey_check_co.paa"
		};
	};
	class FlatCap_Check_Black: FlatCapBase
	{
		scope=2;
		displayName="Black Check Flat Cap";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa",
			"\DZ\characters\headgear\data\FlatCap_black_check_co.paa"
		};
	};
	class ZmijovkaCapBase: HeadgearBase
	{
		absorbency=0.80000001;
		heatIsolation=1.1;
		scope=0;
		displayName="Zmijovka Cap";
		lootTag[]=
		{
			"Civilian",
			"Hunting",
			"Work",
			"Fishing"
		};
		descriptionShort="A traditional Chernarussian headwear suitable for chilly or windy weather. The name Zmijovka relates to the viper-like pattern, as 'zmije' means viper.";
		itemSize[]={1,1};
		weight=110;
		repairableWith=2;
		model="\DZ\characters\headgear\ZmijovkaCap_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\ZmijovkaCap.rvmat",
				"DZ\characters\headgear\data\ZmijovkaCap_damage.rvmat",
				"DZ\characters\headgear\data\ZmijovkaCap_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ZmijovkaCap_m.p3d";
			female="\DZ\characters\headgear\ZmijovkaCap_f.p3d";
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
			shock=30;
			bleed=0.1;
		};
	};
	class ZmijovkaCap_Black: ZmijovkaCapBase
	{
		scope=2;
		displayName="Black Zmijovka Cap";
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ZmijovkaCap_Black_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Black_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Black_co.paa"
		};
	};
	class ZmijovkaCap_Blue: ZmijovkaCapBase
	{
		scope=2;
		displayName="Blue Zmijovka Cap";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ZmijovkaCap_Blue_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Blue_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Blue_co.paa"
		};
	};
	class ZmijovkaCap_Brown: ZmijovkaCapBase
	{
		scope=2;
		displayName="Brown Zmijovka Cap";
		color="Brown";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ZmijovkaCap_Brown_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Brown_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Brown_co.paa"
		};
	};
	class ZmijovkaCap_Green: ZmijovkaCapBase
	{
		scope=2;
		displayName="Green Zmijovka Cap";
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ZmijovkaCap_Green_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Green_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Green_co.paa"
		};
	};
	class ZmijovkaCap_Red: ZmijovkaCapBase
	{
		scope=2;
		displayName="Red Zmijovka Cap";
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\ZmijovkaCap_Red_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Red_co.paa",
			"DZ\characters\headgear\data\ZmijovkaCap_Red_co.paa"
		};
	};
	class CowboyHatBase: HeadgearBase
	{
		absorbency=0.30000001;
		heatIsolation=1.08;
		scope=0;
		displayName="$STR_ITEMS_COWBOYHAT";
		descriptionShort="$STR_ITEMS_COWBOYHAT_DESC";
		lootTag[]=
		{
			"Civilian",
			"Farm",
			"Hunting",
			"Camping"
		};
		itemSize[]={2,2};
		weight=370;
		repairableWith=3;
		model="\DZ\characters\headgear\CowboyHat_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\CowboyHat.rvmat",
				"DZ\characters\headgear\data\CowboyHat_damage.rvmat",
				"DZ\characters\headgear\data\CowboyHat_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\CowboyHat.p3d";
			female="\DZ\characters\headgear\CowboyHat.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
	};
	class CowboyHat_Brown: CowboyHatBase
	{
		scope=2;
		displayName="Brown Cowboy Hat";
		color="Brown";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa"
		};
	};
	class CowboyHat_black: CowboyHatBase
	{
		scope=2;
		displayName="Black Cowboy Hat";
		color="black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa"
		};
	};
	class CowboyHat_darkBrown: CowboyHatBase
	{
		scope=2;
		displayName="Dark Brown Cowboy Hat";
		color="darkBrown";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa"
		};
	};
	class CowboyHat_green: CowboyHatBase
	{
		scope=2;
		displayName="Green Cowboy Hat";
		color="green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa"
		};
	};
	class BoonieHatBase: HeadgearBase
	{
		absorbency=0.69999999;
		heatIsolation=1.04;
		scope=0;
		displayName="$STR_ITEMS_BOONIEHAT";
		descriptionShort="$STR_ITEMS_BOONIEHAT_DESC";
		model="\DZ\characters\headgear\BoonieHat_g.p3d";
		lootTag[]=
		{
			"Civilian",
			"Farm",
			"Hunting",
			"Camping",
			"Fishing"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\BoonieHat.rvmat",
				"DZ\characters\headgear\data\BoonieHat_damage.rvmat",
				"DZ\characters\headgear\data\BoonieHat_destruct.rvmat"
			};
		};
		inventoryCondition="typeOf _parent != typeOf _this";
		attachments[]=
		{
			"Hook"
		};
		itemsCargoSize[]={0,0};
		weight=170;
		repairableWith=2;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\BoonieHat.p3d";
			female="\DZ\characters\headgear\BoonieHat.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale"
		};
		hiddenSelectionsTextures[]={};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
	};
	class BoonieHat_black: BoonieHatBase
	{
		scope=2;
		displayName="Black Boonie Hat";
		color="black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_black_co.paa",
			"DZ\characters\headgear\data\BoonieHat_black_co.paa",
			"DZ\characters\headgear\data\BoonieHat_black_co.paa"
		};
	};
	class BoonieHat_Blue: BoonieHatBase
	{
		scope=2;
		displayName="Blue Boonie Hat";
		color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Blue_co.paa"
		};
	};
	class BoonieHat_DPM: BoonieHatBase
	{
		scope=2;
		displayName="DPM Boonie Hat";
		color="DPM";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa",
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa",
			"DZ\characters\headgear\data\BoonieHat_DPM_co.paa"
		};
	};
	class BoonieHat_dubok: BoonieHatBase
	{
		scope=2;
		displayName="Dubok Boonie Hat";
		color="dubok";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa",
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa",
			"DZ\characters\headgear\data\BoonieHat_dubok_co.paa"
		};
	};
	class BoonieHat_flecktran: BoonieHatBase
	{
		scope=2;
		displayName="Flecktarn Boonie Hat";
		color="flecktran";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa",
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa",
			"DZ\characters\headgear\data\BoonieHat_flecktran_co.paa"
		};
	};
	class BoonieHat_NavyBlue: BoonieHatBase
	{
		scope=2;
		displayName="Navy Blue Boonie Hat";
		color="NavyBlue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa",
			"DZ\characters\headgear\data\BoonieHat_NavyBlue_co.paa"
		};
	};
	class BoonieHat_olive: BoonieHatBase
	{
		scope=2;
		displayName="Olive Boonie Hat";
		color="olive";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa",
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa",
			"DZ\characters\headgear\data\BoonieHat_olive_co.paa"
		};
	};
	class BoonieHat_orange: BoonieHatBase
	{
		scope=2;
		displayName="Orange Boonie Hat";
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa",
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa",
			"DZ\characters\headgear\data\BoonieHat_orange_co.paa"
		};
	};
	class BoonieHat_red: BoonieHatBase
	{
		scope=2;
		displayName="Orange Boonie Hat";
		color="red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_red_co.paa",
			"DZ\characters\headgear\data\BoonieHat_red_co.paa",
			"DZ\characters\headgear\data\BoonieHat_red_co.paa"
		};
	};
	class BoonieHat_Tan: BoonieHatBase
	{
		scope=2;
		displayName="Tan Boonie Hat";
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa",
			"DZ\characters\headgear\data\BoonieHat_Tan_co.paa"
		};
	};
	class OfficerHat: HeadgearBase
	{
		scope=2;
		absorbency=0.5;
		heatIsolation=1.04;
		displayName="$STR_ITEMS_OFFICERHAT";
		descriptionShort="$STR_ITEMS_OFFICERHAT_DESC";
		repairableWith=2;
		lootTag[]=
		{
			"Military_east"
		};
		itemSize[]={2,1};
		weight=340;
		model="\DZ\characters\headgear\Officerhat_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\Officerhat.rvmat",
				"DZ\characters\headgear\data\Officerhat_damage.rvmat",
				"DZ\characters\headgear\data\Officerhat_destruct.rvmat"
			};
		};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Officerhat_m.p3d";
			female="\DZ\characters\headgear\Officerhat_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Officerhat_co.paa",
			"dz\characters\headgear\data\Officerhat_co.paa",
			"dz\characters\headgear\data\Officerhat_co.paa"
		};
	};
	class PoliceCap: HeadgearBase
	{
		scope=2;
		absorbency=0.40000001;
		heatIsolation=1.04;
		displayName="Police Cap";
		lootTag[]=
		{
			"Police"
		};
		descriptionShort="Standard issue of Chernarus Police Department Cap";
		repairableWith=2;
		itemSize[]={2,1};
		weight=320;
		model="\DZ\characters\headgear\PoliceCap_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\PoliceCap.rvmat",
				"DZ\characters\headgear\data\PoliceCap_damage.rvmat",
				"DZ\characters\headgear\data\PoliceCap_destruct.rvmat"
			};
		};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\PoliceCap_m.p3d";
			female="\DZ\characters\headgear\PoliceCap_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\PoliceCap_co.paa",
			"dz\characters\headgear\data\PoliceCap_co.paa",
			"dz\characters\headgear\data\PoliceCap_co.paa"
		};
	};
	class PilotkaCap: HeadgearBase
	{
		scope=2;
		absorbency=0.5;
		heatIsolation=0.69999999;
		displayName="Pilotka Cap";
		descriptionShort="Pilotka cap is a foldable military cap with straight sides and a creased or hollow crown sloping to the back where it is parted. Belongs to the basic GI unit of the Red Army Infantry. Dated anywhere between early 60s to late 80s";
		repairableWith=2;
		lootTag[]=
		{
			"Military_east",
			"Military"
		};
		itemSize[]={1,1};
		weight=140;
		model="\DZ\characters\headgear\pilotka_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\pilotka.rvmat",
				"DZ\characters\headgear\data\pilotka_damage.rvmat",
				"DZ\characters\headgear\data\pilotka_destruct.rvmat"
			};
		};
		class DamageArmor
		{
			shock=30;
			bleed=0.1;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\pilotka_m.p3d";
			female="\DZ\characters\headgear\pilotka_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Pilotka_co.paa",
			"dz\characters\headgear\data\Pilotka_co.paa",
			"dz\characters\headgear\data\Pilotka_co.paa"
		};
	};
	class TankerHelmet: HeadgearBase
	{
		scope=2;
		absorbency=0.40000001;
		heatIsolation=1.1;
		displayName="Tanker Helmet";
		descriptionShort="Summer tank-man's helmet made according to Russian design from fabric and horsehair unlike the fiber, leather, and metal AFV helmets of many other nations of the same era. Strategically placed bumpers should provide head protection inside a jolting armoured fighting vehicle.";
		lootTag[]=
		{
			"Military_east",
			"Military"
		};
		model="\DZ\characters\headgear\TankerHelmet_g.p3d";
		itemSize[]={2,2};
		weight=980;
		repairableWith=2;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\TankerHelmet.rvmat",
				"DZ\characters\headgear\data\TankerHelmet_damage.rvmat",
				"DZ\characters\headgear\data\TankerHelmet_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\TankerHelmet.p3d";
			female="\DZ\characters\headgear\TankerHelmet.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa",
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa",
			"\DZ\characters\headgear\data\TankerHelmet_black_co.paa"
		};
		class DamageArmor
		{
			ballistic=0.69999999;
			bleed=0.89999998;
		};
	};
	class GorkaHelmet: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=1;
		displayName="Gorka E Military Helmet";
		lootTag[]=
		{
			"Police"
		};
		descriptionShort="Military helmet of local Gorka military unit. Designed to protect both head and face.";
		model="\DZ\characters\headgear\Maska_g.p3d";
		itemSize[]={2,2};
		weight=1100;
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\maska.rvmat",
				"DZ\characters\headgear\data\maska_damage.rvmat",
				"DZ\characters\headgear\data\maska_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Maska.p3d";
			female="\DZ\characters\headgear\Maska.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa"
		};
		class DamageArmor
		{
			ballistic=0.80000001;
			bleed=0.80000001;
			biological=0.44999999;
			shock=10000;
		};
	};
	class GorkaHelmet_Green: GorkaHelmet
	{
		scope=1;
	};
	class GorkaHelmet_Black: GorkaHelmet
	{
		scope=1;
		displayName="Black Gorka E Military Helmet";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa"
		};
	};
	class GorkaHelmet_complete: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=1;
		displayName="Gorka E Military Helmet with visor";
		descriptionShort="Military helmet of local Gorka military unit. Designed to protect both head and face.";
		model="\DZ\characters\headgear\Maska_complete_g.p3d";
		itemSize[]={2,2};
		attachments[]=
		{
			"Glass"
		};
		itemsCargoSize[]={0,0};
		noMask=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\maska.rvmat",
				"DZ\characters\headgear\data\maska_damage.rvmat",
				"DZ\characters\headgear\data\maska_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Maska_complete.p3d";
			female="\DZ\characters\headgear\Maska_complete.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa",
			"\DZ\characters\headgear\data\maska_co.paa"
		};
		class DamageArmor
		{
			ballistic=0.85000002;
			bleed=0.94999999;
			biological=0.60000002;
			shock=15000;
		};
	};
	class GorkaHelmet_complete_Green: GorkaHelmet_complete
	{
		scope=1;
	};
	class GorkaHelmet_complete_Black: GorkaHelmet_complete
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa",
			"\DZ\characters\headgear\data\maska_black_co.paa"
		};
	};
	class FirefightersHelmetBase: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=1;
		displayName="Firefighter Helmet";
		descriptionShort="Standard issue of Chernarus Firefighting force helmet. Protects wearer from heat and water and any possible head trauma.";
		model="\DZ\characters\headgear\FireHelmet_g.p3d";
		lootTag[]=
		{
			"Firefighters"
		};
		itemSize[]={2,2};
		weight=870;
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\FireHelmet.rvmat",
				"DZ\characters\headgear\data\FireHelmet_damage.rvmat",
				"DZ\characters\headgear\data\FireHelmet_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\FireHelmet.p3d";
			female="\DZ\characters\headgear\FireHelmet.p3d";
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageArmor
		{
			biological=0.40000001;
			ballistic=0.85000002;
			bleed=0.94999999;
			shock=6000;
		};
	};
	class FirefightersHelmet_Red: FirefightersHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_red_co.paa"
		};
	};
	class FirefightersHelmet_White: FirefightersHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_white_co.paa"
		};
	};
	class FirefightersHelmet_Yellow: FirefightersHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa",
			"\DZ\characters\headgear\data\FireHelmet_yellow_co.paa"
		};
	};
	class SkateHelmetBase: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=0.5;
		displayName="Skate Helmet";
		descriptionShort="Skate helmet hardshell construction utilizes a durable, high-density, injection-moulded ABS shell, ideal for an aggressive riding style, In-Mold construction fuses a lightweight polycarbonate outer shell with the helmet’s impact-absorbing EPS foam liner. This method of construction provides the optimal balance of protection and low-profile style without any excess weight.";
		model="\DZ\characters\headgear\ProtecSkateHelmet2_g.p3d";
		lootTag[]=
		{
			"Civilian"
		};
		itemSize[]={2,2};
		weight=460;
		noMask=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\ProtecSkateHelmet2.rvmat",
				"DZ\characters\headgear\data\ProtecSkateHelmet2_damage.rvmat",
				"DZ\characters\headgear\data\ProtecSkateHelmet2_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\ProtecSkateHelmet2_f.p3d";
			female="\DZ\characters\headgear\ProtecSkateHelmet2_m.p3d";
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageArmor
		{
			ballistic=0.40000001;
			bleed=0.85000002;
			shock=4500;
			biological=0.44999999;
		};
	};
	class SkateHelmet_Black: SkateHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_black_CO.paa"
		};
	};
	class SkateHelmet_Blue: SkateHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_blue_CO.paa"
		};
	};
	class SkateHelmet_Gray: SkateHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_gray_CO.paa"
		};
	};
	class SkateHelmet_Green: SkateHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_green_CO.paa"
		};
	};
	class SkateHelmet_Red: SkateHelmetBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa",
			"\DZ\characters\headgear\data\ProtecSkateHelmet2_red_CO.paa"
		};
	};
	class WeldingMask: HeadgearBase
	{
		scope=2;
		displayName="Welding mask";
		descriptionShort="Headgear used when performing certain types of welding to protect the eyes, face and neck from flash burn, ultraviolet light, sparks, infrared light, and heat.";
		itemSize[]={1,2};
		noMask=1;
		lootTag[]=
		{
			"Work"
		};
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		model="\DZ\characters\masks\Welding_Mask_g.p3d";
		weight=2200;
		class ClothingTypes
		{
			male="\DZ\characters\masks\Welding_Mask_m.p3d";
			female="\DZ\characters\masks\Welding_Mask_f.p3d";
		};
		class DamageArmor
		{
			biological=0.2;
			balistic=0.050000001;
			bleed=0.1;
			shock=2000;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\masks\data\Welding_Mask.rvmat",
				"DZ\characters\masks\data\Welding_Mask_damage.rvmat",
				"DZ\characters\masks\data\Welding_Mask_destruct.rvmat",
				"DZ\characters\masks\data\Welding_Mask_2.rvmat",
				"DZ\characters\masks\data\Welding_Mask_2_damage.rvmat",
				"DZ\characters\masks\data\Welding_Mask_2_destruct.rvmat"
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
			"\DZ\characters\masks\data\Welding_Mask_CO.paa",
			"\DZ\characters\masks\data\Welding_Mask_CO.paa",
			"\DZ\characters\masks\data\Welding_Mask_CO.paa"
		};
	};
	class PrisonerCap: HeadgearBase
	{
		scope=2;
		absorbency=0.89999998;
		heatIsolation=0.30000001;
		displayName="Chernarus Prisoners Uniform Cap";
		descriptionShort="Standard issue of Chernarus prisoners uniform cap.";
		model="\DZ\characters\headgear\prison_cap_g.p3d";
		lootTag[]=
		{
			"Prison"
		};
		itemSize[]={1,1};
		weight=80;
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\prison_cap.rvmat",
				"DZ\characters\headgear\data\prison_cap_damage.rvmat",
				"DZ\characters\headgear\data\prison_cap_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\prison_cap_m.p3d";
			female="\DZ\characters\headgear\prison_cap_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageArmor
		{
			ballistic=0.1;
			bleed=0.30000001;
			shock=100;
			biological=0.44999999;
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa",
			"\DZ\characters\headgear\data\prison_cap_co.paa"
		};
	};
	class GhillieHoodBase: HeadgearBase
	{
		scope=0;
		absorbency=0.89999998;
		heatIsolation=2;
		descriptionShort="Camouflage headpiece designed to break up silhouette of wearer's head";
		model="\DZ\characters\headgear\GhillieHood.p3d";
		itemSize[]={2,2};
		repairableWith=3;
		class ClothingTypes
		{
			male="\DZ\characters\headgear\GhillieHood.p3d";
			female="\DZ\characters\headgear\GhillieHood.p3d";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\ghillie.rvmat"
		};
		weight=410;
	};
	class GhillieHoodTan: GhillieHoodBase
	{
		scope=2;
		displayName="Ghillie Hood Tan";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_tan_ca.paa"
		};
		class Damage
		{
			tex[]=
			{
				"DZ\characters\backpacks\data\ghillie_tan_ca.paa",
				"DZ\characters\backpacks\data\ghillie_tan_damage_ca.paa",
				"DZ\characters\backpacks\data\ghillie_tan_destruct_ca.paa"
			};
			mat[]={};
		};
	};
	class GhillieHoodWoodland: GhillieHoodBase
	{
		scope=2;
		displayName="Ghillie Hood Woodland";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_green_ca.paa"
		};
		class Damage
		{
			tex[]=
			{
				"DZ\characters\backpacks\data\ghillie_green_ca.paa",
				"DZ\characters\backpacks\data\ghillie_green_damage_ca.paa",
				"DZ\characters\backpacks\data\ghillie_green_destruct_ca.paa"
			};
			mat[]={};
		};
	};
	class GhillieHoodMossy: GhillieHoodBase
	{
		scope=2;
		displayName="Ghillie Hood Mossy";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_mossy_ca.paa"
		};
		class Damage
		{
			tex[]=
			{
				"DZ\characters\backpacks\data\ghillie_mossy_ca.paa",
				"DZ\characters\backpacks\data\ghillie_mossy_damage_ca.paa",
				"DZ\characters\backpacks\data\ghillie_mossy_destruct_ca.paa"
			};
			mat[]={};
		};
	};
	class Hat_LeatherBase: HeadgearBase
	{
		scope=0;
		displayName="Leather Hat";
		descriptionShort="A classic hat made of leather.";
		itemSize[]={1,1};
		absorbency=0;
		heatIsolation=0.13;
		weight=320;
		noMask=1;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=3;
		model="\DZ\characters\headgear\Hat_Leather_g.p3d";
		class DamageArmor
		{
			biological=0.2;
			ballistic=1.5;
			bleed=0.89999998;
			shock=10000;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Hat_Leather.p3d";
			female="\DZ\characters\headgear\Hat_Leather.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\headgear\data\Hat_Leather_CO.paa",
			"dz\characters\headgear\data\Hat_Leather_CO.paa",
			"dz\characters\headgear\data\Hat_Leather_CO.paa"
		};
	};
	class Hat_Leather_Natural: Hat_LeatherBase
	{
		scope=1;
		displayName="Natural Leather Hat";
		color="Natural";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\headgear\data\Hat_Leather_Natural.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Natural_damage.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Natural_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_Natural.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Natural.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Natural.rvmat"
		};
	};
	class Hat_Leather_Beige: Hat_LeatherBase
	{
		scope=1;
		displayName="Beige Leather Hat";
		color="Beige";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\headgear\data\Hat_Leather_Beige.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Beige_damage.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Beige_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_Beige.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Beige.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Beige.rvmat"
		};
	};
	class Hat_Leather_Brown: Hat_LeatherBase
	{
		scope=1;
		displayName="Brown Leather Hat";
		color="Brown";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\headgear\data\Hat_Leather_Brown.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Brown_damage.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Brown_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_Brown.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Brown.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Brown.rvmat"
		};
	};
	class Hat_Leather_Black: Hat_LeatherBase
	{
		scope=1;
		displayName="Black Leather Hat";
		color="Black";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\headgear\data\Hat_Leather_Black.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Black_damage.rvmat",
				"dz\characters\headgear\data\Hat_Leather_Black_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\headgear\data\Hat_Leather_Black.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Black.rvmat",
			"dz\characters\headgear\data\Hat_Leather_Black.rvmat"
		};
	};
	class MedicalScrubs_HatBase: HeadgearBase
	{
		scope=0;
		absorbency=0;
		heatIsolation=0.5;
		displayName="Medical Scrubs Hat";
		descriptionShort="Scrubs are the shirts and trousers or gowns worn by surgeons, midwives and other operating room personnel when sterilizing themselves, or 'scrubbing in', before surgery. They are designed to be simple with minimal places for contaminants to hide, easy to launder, and cheap to replace if damaged or stained irreparably.";
		model="\DZ\characters\headgear\MedicalScrubs_Hat_g.p3d";
		lootTag[]=
		{
			"Medic"
		};
		itemSize[]={1,1};
		weight=460;
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\MedicalScrubs_Hat.rvmat",
				"DZ\characters\headgear\data\MedicalScrubs_Hat_damage.rvmat",
				"DZ\characters\headgear\data\MedicalScrubs_Hat_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MedicalScrubs_Hat_f.p3d";
			female="\DZ\characters\headgear\MedicalScrubs_Hat_m.p3d";
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale",
			"camoGround"
		};
		class DamageArmor
		{
			ballistic=0.40000001;
			bleed=0.85000002;
			shock=4500;
			biological=0.44999999;
		};
	};
	class MedicalScrubs_Hat_Blue: MedicalScrubs_HatBase
	{
		scope=2;
		displayName="Blue Medical Scrubs Hat";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_blue_co.paa"
		};
	};
	class MedicalScrubs_Hat_White: MedicalScrubs_HatBase
	{
		scope=2;
		displayName="White Medical Scrubs Hat";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_white_co.paa"
		};
	};
	class MedicalScrubs_Hat_Green: MedicalScrubs_HatBase
	{
		scope=2;
		displayName="Green Scrubs Hat";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa",
			"\DZ\characters\headgear\data\MedicalScrubs_Hat_green_co.paa"
		};
	};
	class GreathelmBase: HeadgearBase
	{
		scope=0;
		descriptionShort="Massive steel helmet used by knights and heavy infantry during European middle ages.";
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.2;
		lootTag[]=
		{
			"Historical"
		};
		noMask=1;
		weight=2000;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		model="\DZ\characters\headgear\greathelm_g.p3d";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\greathelm.rvmat",
				"DZ\characters\headgear\data\greathelm_damage.rvmat",
				"DZ\characters\headgear\data\greathelm_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class DamageArmor
		{
			biological=0.60000002;
			ballistic=0.5;
			bleed=1;
			shock=10000;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\greathelm.p3d";
			female="\DZ\characters\headgear\greathelm.p3d";
		};
	};
	class Greathelm: GreathelmBase
	{
		scope=2;
		displayName="Great Helm";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\headgear\data\greathelm_CO.paa"
		};
	};
	class Ssh68Helmet: HeadgearBase
	{
		scope=2;
		displayName="Ssh68 Helmet";
		descriptionShort="Combat helmet designed specifically to protect the head during combat situations. Made from Aramid with an excellent shock absorption system and quick-release catch.";
		model="\DZ\characters\headgear\Ssh68Helmet_g.p3d";
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.13;
		lootTag[]=
		{
			"Military",
			"Military_east"
		};
		noMask=1;
		weight=1500;
		AttachmentCondition="((count (itemsInCargo _this) == 0) or (isNull _parent) or isPlayer _parent) and (getNumber (configFile >> 'cfgVehicles' >> typeOf (_parent itemInSlot 'Mask') >> 'noHelmet') == 0)";
		repairableWith=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\headgear\data\SSH68Helmet.rvmat",
				"DZ\characters\headgear\data\SSH68Helmet_damage.rvmat",
				"DZ\characters\headgear\data\SSH68Helmet_destruct.rvmat"
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
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa",
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa",
			"\DZ\characters\headgear\data\SSH68Helmet_olive_co.paa"
		};
		class DamageArmor
		{
			biological=0.2;
			ballistic=1.5;
			bleed=0.89999998;
			shock=10000;
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\Ssh68Helmet.p3d";
			female="\DZ\characters\headgear\Ssh68Helmet.p3d";
		};
	};
};
