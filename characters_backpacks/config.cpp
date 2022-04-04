class CfgPatches
{
	class DZ_Characters_Backpacks
	{
		units[]=
		{
			"BagTaloon_Blue",
			"BagTaloon_Green",
			"BagTaloon_Orange",
			"BagTaloon_Violet",
			"BagCourierImprovised",
			"BagCourierImprovisedFur",
			"BagImprovised",
			"BagImprovisedFur",
			"BagHunting",
			"BagMountain_Blue",
			"BagMountain_Green",
			"BagMountain_Orange",
			"BagMountain_Red",
			"BagChilds_Blue",
			"BagChilds_Green",
			"BagChilds_Red",
			"GhillieBushragWoodland",
			"GhillieTopWoodland",
			"GhillieSuitWoodland",
			"GhillieBushragTan",
			"GhillieTopTan",
			"GhillieSuitTan",
			"GhillieBushragMossy",
			"GhillieTopMossy",
			"GhillieSuitMossy"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class InventoryBase;
	class BagBase;
	class BagTaloonBase: BagBase
	{
		scope=0;
		displayName="Taloon Backpack";
		absorbency=0.30000001;
		lootTag[]=
		{
			"Civilian"
		};
		heatIsolation=0.1;
		descriptionShort="Designed to be used all day, this lightweight backpack comes with a padded harness that is able to comfortably support any load.";
		model="\dz\characters\backpacks\taloon_g.p3d";
		itemsCargoSize[]={5,5};
		randomQuantity=3;
		weight=1300;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\taloon.rvmat",
				"DZ\characters\backpacks\data\taloon_damage.rvmat",
				"DZ\characters\backpacks\data\taloon_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\taloon_m.p3d";
			female="\DZ\characters\backpacks\taloon_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};
	class BagTaloon_Blue: BagTaloonBase
	{
		scope=2;
		displayName="Blue Taloon Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa"
		};
	};
	class BagTaloon_Green: BagTaloonBase
	{
		scope=2;
		displayName="Green Taloon Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa"
		};
	};
	class BagTaloon_Orange: BagTaloonBase
	{
		scope=2;
		displayName="Orange Taloon Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa"
		};
	};
	class BagTaloon_Violet: BagTaloonBase
	{
		scope=2;
		displayName="Violet Taloon Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa"
		};
	};
	class BagTortilla: BagBase
	{
		scope=2;
		displayName="SPOSN Tortilla Backpack";
		descriptionShort="Medium sized assault backpack. It has one large chamber, two side pockets and two back pockets, wide shoulder straps with quick release, sturdy and comfortable main belt. It's made of waterproof cordura.";
		absorbency=0;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		heatIsolation=0.079999998;
		model="\dz\characters\backpacks\tortilla_g.p3d";
		itemsCargoSize[]={5,8};
		weight=2100;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\tortila.rvmat",
				"DZ\characters\backpacks\data\tortila_damage.rvmat",
				"DZ\characters\backpacks\data\tortila_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\tortilla_m.p3d";
			female="\DZ\characters\backpacks\tortilla_f.p3d";
		};
	};
	class BagCourierImprovised: BagBase
	{
		scope=2;
		displayName="Improvised Courier Bag";
		absorbency=0.60000002;
		heatIsolation=0.02;
		descriptionShort="A handcrafted improvised courier bag made of rope and burlap sack.";
		model="\dz\characters\backpacks\ImpCourierBag_g.p3d";
		itemsCargoSize[]={4,4};
		weight=900;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\ImpCourierBag.rvmat",
				"DZ\characters\backpacks\data\ImpCourierBag_damage.rvmat",
				"DZ\characters\backpacks\data\ImpCourierBag_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\ImpCourierBag_m.p3d";
			female="\DZ\characters\backpacks\ImpCourierBag_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa"
		};
	};
	class BagCourierImprovisedFur: BagBase
	{
		scope=2;
		displayName="Leather Courier Bag";
		heatIsolation=0.079999998;
		descriptionShort="A handcrafted courier bag made of rope and wild boar pelt.";
		itemsCargoSize[]={4,5};
		weight=1200;
		repairableWith=3;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\ImpCourierBag_fur.rvmat",
				"DZ\characters\backpacks\data\ImpCourierBag_fur_damage.rvmat",
				"DZ\characters\backpacks\data\ImpCourierBag_fur_destruct.rvmat"
			};
		};
		model="\dz\characters\backpacks\ImpCourierBagFur_g.p3d";
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\ImpCourierBagFur_m.p3d";
			female="\DZ\characters\backpacks\ImpCourierBagFur_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa"
		};
	};
	class BagImprovised: BagBase
	{
		scope=1;
		displayName="Improvised Backpack";
		absorbency=0.60000002;
		heatIsolation=0.02;
		descriptionShort="A handcrafted improvised backpack made of wood sticks, rope and burlap. Not very fashionable, but very practical.";
		model="\dz\characters\backpacks\bp_Improvised_g.p3d";
		itemsCargoSize[]={5,5};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\bp_improvised.rvmat",
				"DZ\characters\backpacks\data\bp_improvised_damage.rvmat",
				"DZ\characters\backpacks\data\bp_improvised_destruct.rvmat"
			};
		};
		weight=2400;
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\bp_Improvised_m.p3d";
			female="\DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\bp_improvised_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_co.paa"
		};
	};
	class BagImprovisedFur: BagBase
	{
		scope=1;
		displayName="Improvised Leather Backpack";
		absorbency=0.050000001;
		heatIsolation=0.12;
		repairableWith=3;
		descriptionShort="A handcrafted improvised backpack made of wood sticks, rope and animal pelt.";
		model="\dz\characters\backpacks\bp_ImprovisedFur_g.p3d";
		weight=3300;
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\bp_ImprovisedFur_m.p3d";
			female="\DZ\characters\backpacks\bp_ImprovisedFur_f.p3d";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\bp_improvised_fur.rvmat",
				"DZ\characters\backpacks\data\bp_improvised_fur_damage.rvmat",
				"DZ\characters\backpacks\data\bp_improvised_fur_destruct.rvmat"
			};
		};
		itemsCargoSize[]={5,5};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat",
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat",
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat"
		};
	};
	class BagDrybagBase: BagBase
	{
		scope=0;
		displayName="Dry Bag";
		absorbency=0;
		heatIsolation=1;
		lootTag[]=
		{
			"Civilian"
		};
		descriptionShort="A bag which seals in a watertight manner. Dry bags are often used in kayaking, canoeing, rafting, and other outdoor activities where sensitive items would otherwise get wet as well as extreme sports such as skiing and snowboarding. Construction of waterproofed fabric which is formed to create an impermeable, water-ingress protected bag.";
		model="\dz\characters\backpacks\drybag_g.p3d";
		itemsCargoSize[]={6,7};
		randomQuantity=4;
		weight=600;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\dryBag.rvmat",
				"DZ\characters\backpacks\data\dryBag_damage.rvmat",
				"DZ\characters\backpacks\data\dryBag_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\drybag_m.p3d";
			female="\DZ\characters\backpacks\drybag_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\drybag_co.paa",
			"\dz\characters\backpacks\data\drybag_co.paa",
			"\dz\characters\backpacks\data\drybag_co.paa"
		};
	};
	class Bagdrybag_Black: BagDrybagBase
	{
		scope=2;
		displayName="Black Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Black_co.paa",
			"DZ\characters\backpacks\data\drybag_Black_co.paa",
			"DZ\characters\backpacks\data\drybag_Black_co.paa"
		};
	};
	class Bagdrybag_Orange: BagDrybagBase
	{
		scope=2;
		displayName="Orange Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Orange_co.paa",
			"DZ\characters\backpacks\data\drybag_Orange_co.paa",
			"DZ\characters\backpacks\data\drybag_Orange_co.paa"
		};
	};
	class Bagdrybag_Yellow: BagDrybagBase
	{
		scope=2;
		displayName="Yellow Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Yellow_co.paa",
			"DZ\characters\backpacks\data\drybag_Yellow_co.paa",
			"DZ\characters\backpacks\data\drybag_Yellow_co.paa"
		};
	};
	class Bagdrybag_Blue: BagDrybagBase
	{
		scope=2;
		displayName="Blue Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Blue_co.paa",
			"DZ\characters\backpacks\data\drybag_Blue_co.paa",
			"DZ\characters\backpacks\data\drybag_Blue_co.paa"
		};
	};
	class Bagdrybag_Green: BagDrybagBase
	{
		scope=2;
		displayName="Green Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Green_co.paa",
			"DZ\characters\backpacks\data\drybag_Green_co.paa",
			"DZ\characters\backpacks\data\drybag_Green_co.paa"
		};
	};
	class Bagdrybag_Red: BagDrybagBase
	{
		scope=2;
		displayName="Red Drybag";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\drybag_Red_co.paa",
			"DZ\characters\backpacks\data\drybag_Red_co.paa",
			"DZ\characters\backpacks\data\drybag_Red_co.paa"
		};
	};
	class BagHunting: BagBase
	{
		scope=2;
		displayName="Hunting Backpack";
		absorbency=0.40000001;
		heatIsolation=0.1;
		lootTag[]=
		{
			"Forester",
			"Hunting"
		};
		descriptionShort="Standard Chernarusian hunting backpack with closable pockets. Very durable and comfortable if a little old-fashioned.";
		model="\dz\characters\backpacks\hunting_g.p3d";
		itemsCargoSize[]={8,8};
		randomQuantity=4;
		weight=1400;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\hunting.rvmat",
				"DZ\characters\backpacks\data\hunting_damage.rvmat",
				"DZ\characters\backpacks\data\hunting_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\hunting_m.p3d";
			female="\DZ\characters\backpacks\hunting_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa"
		};
	};
	class BagMountainBase: BagBase
	{
		scope=0;
		displayName="Mountain Backpack";
		absorbency=0.2;
		heatIsolation=0.13;
		lootTag[]=
		{
			"Civilian",
			"Camping"
		};
		descriptionShort="Large mountaineering backpack made from hi-tech materials. Thanks to reflex pads, it is visible even in fog or dark.";
		model="\dz\characters\backpacks\mountain_g.p3d";
		itemsCargoSize[]={7,8};
		randomQuantity=4;
		weight=2300;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\mountain.rvmat",
				"DZ\characters\backpacks\data\mountain_damage.rvmat",
				"DZ\characters\backpacks\data\mountain_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\mountain_m.p3d";
			female="\DZ\characters\backpacks\mountain_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa"
		};
	};
	class BagMountain_Blue: BagMountainBase
	{
		scope=2;
		displayName="Blue Mountain Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa"
		};
	};
	class BagMountain_Red: BagMountainBase
	{
		scope=2;
		displayName="Red Mountain Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa"
		};
	};
	class BagMountain_Orange: BagMountainBase
	{
		scope=2;
		displayName="Orange Mountain Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa"
		};
	};
	class BagMountain_Green: BagMountainBase
	{
		scope=2;
		displayName="Green Mountain Backpack";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa"
		};
	};
	class SmershBackpack: BagBase
	{
		scope=2;
		displayName="Smersh Backpack";
		absorbency=0.30000001;
		heatIsolation=0.1;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		descriptionShort="Part of smersh vest set. It's not the biggest backpack ever, but you can attach it to the vest and keep a place for an additional backpack.";
		model="\dz\characters\backpacks\SmershBag_g.p3d";
		weight=600;
		itemsCargoSize[]={4,2};
		itemSize[]={3,4};
		randomQuantity=1;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\vests\data\Smersh.rvmat",
				"DZ\characters\vests\data\Smersh_damage.rvmat",
				"DZ\characters\vests\data\Smersh_destruct.rvmat",
				"DZ\characters\vests\data\Smersh_g.rvmat",
				"DZ\characters\vests\data\Smersh_g_damage.rvmat",
				"DZ\characters\vests\data\Smersh_g_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SmershBag_m.p3d";
			female="\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\vests\data\smersh_co.paa",
			"\dz\characters\vests\data\smersh_co.paa",
			"\dz\characters\vests\data\smersh_co.paa"
		};
	};
	class BagChildsBase: BagBase
	{
		scope=0;
		displayName="School Backpack";
		absorbency=0.1;
		heatIsolation=0.5;
		lootTag[]=
		{
			"Civilian",
			"Kids"
		};
		descriptionShort="A cute small children's school backpack. Not very practical in terms of carrying space, but makes you the star of the class.";
		model="\dz\characters\backpacks\childs_g.p3d";
		itemsCargoSize[]={4,3};
		randomQuantity=2;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\childs.rvmat",
				"DZ\characters\backpacks\data\childs_damage.rvmat",
				"DZ\characters\backpacks\data\childs_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\childs_m.p3d";
			female="\DZ\characters\backpacks\childs_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\childs_red_co.paa",
			"\dz\characters\backpacks\data\childs_red_co.paa",
			"\dz\characters\backpacks\data\childs_red_co.paa"
		};
	};
	weight=1850;
	class BagChilds_Red: BagChildsBase
	{
		scope=2;
		displayName="Red Child Briefcase";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Childs_Red_co.paa",
			"DZ\characters\backpacks\data\Childs_Red_co.paa",
			"DZ\characters\backpacks\data\Childs_Red_co.paa"
		};
	};
	class BagChilds_Green: BagChildsBase
	{
		scope=2;
		displayName="Green Child Briefcase";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Childs_Green_co.paa",
			"DZ\characters\backpacks\data\Childs_Green_co.paa",
			"DZ\characters\backpacks\data\Childs_Green_co.paa"
		};
	};
	class BagChilds_Blue: BagChildsBase
	{
		scope=2;
		displayName="Blue Child Briefcase";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Childs_Blue_co.paa",
			"DZ\characters\backpacks\data\Childs_Blue_co.paa",
			"DZ\characters\backpacks\data\Childs_Blue_co.paa"
		};
	};
	class GhillieBushragBase: BagBase
	{
		scope=0;
		descriptionShort="Camouflage piece intended to break up silhouette of wearer's shoulders. Cannot be worn toghether with backpack.";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		vehicleClass="Clothing";
		inventorySlot="Back";
		weight=700;
		absorbency=1;
		heatIsolation=10;
		itemsCargoSize[]={1,1};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieBushrag_m.p3d";
			female="\DZ\characters\backpacks\GhillieBushrag_m.p3d";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		itemSize[]={2,2};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\ghillie.rvmat"
		};
	};
	class GhillieBushragTan: GhillieBushragBase
	{
		scope=1;
		displayName="Ghillie Bushrag Tan";
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
	class GhillieBushragWoodland: GhillieBushragBase
	{
		scope=1;
		displayName="Ghillie Bushrag Woodland";
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
	class GhillieBushragMossy: GhillieBushragBase
	{
		scope=1;
		displayName="Ghillie Bushrag Mossy";
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
	class GhillieTopBase: BagBase
	{
		scope=0;
		descriptionShort="Camouflage cloak intended to break silhouette of wearer's upper body. Backpack incompatible.";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		vehicleClass="Clothing";
		inventorySlot="Back";
		absorbency=1;
		weight=800;
		heatIsolation=25;
		itemSize[]={2,2};
		itemsCargoSize[]={1,1};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieTop_m.p3d";
			female="\DZ\characters\backpacks\GhillieTop_m.p3d";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\ghillie.rvmat"
		};
	};
	class GhillieTopTan: GhillieTopBase
	{
		scope=1;
		displayName="Ghillie Top Tan";
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
	class GhillieTopWoodland: GhillieTopBase
	{
		scope=1;
		displayName="Ghillie Top Woodland";
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
	class GhillieTopMossy: GhillieTopBase
	{
		scope=1;
		displayName="Ghillie Top Mossy";
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
	class GhillieSuitBase: BagBase
	{
		scope=0;
		descriptionShort="3D camouflage suit designed to completely conceal the wearer in natural environment. Does not allow to wear backpack, and head cover is a separate piece.";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		vehicleClass="Clothing";
		absorbency=1;
		weight=3200;
		heatIsolation=32;
		inventorySlot="Back";
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieSuit_m.p3d";
			female="\DZ\characters\backpacks\GhillieSuit_m.p3d";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\ghillie.rvmat"
		};
	};
	class GhillieSuitTan: GhillieSuitBase
	{
		scope=1;
		displayName="Ghillie Suit Tan";
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
	class GhillieSuitWoodland: GhillieSuitBase
	{
		scope=1;
		displayName="Ghillie Suit Woodland";
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
	class GhillieSuitMossy: GhillieSuitBase
	{
		scope=1;
		displayName="Ghillie Suit Mossy";
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
	class Bag_LeatherSackBase: BagBase
	{
		scope=0;
		absorbency=0.60000002;
		heatIsolation=0.1;
		displayName="Leather Sack";
		repairableWith=3;
		itemsCargoSize[]={4,6};
		descriptionShort="A large bag made from tanned animal leather.";
		model="\dz\characters\backpacks\Bag_LeatherSack_g.p3d";
		weight=1300;
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\Bag_LeatherSack_m.p3d";
			female="\DZ\characters\backpacks\Bag_LeatherSack_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};
	class Bag_LeatherSack_Natural: Bag_LeatherSackBase
	{
		scope=1;
		displayName="Natural Leather Sack";
		color="Natural";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\backpacks\data\Bag_LeatherSack_Natural.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Natural_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Natural_destruct.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Natural.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Natural_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Natural_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Natural.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Natural.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Natural.rvmat"
		};
	};
	class Bag_LeatherSack_Beige: Bag_LeatherSackBase
	{
		scope=1;
		displayName="Beige Leather Sack";
		color="Beige";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\backpacks\data\Bag_LeatherSack_Beige.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Beige_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Beige_destruct.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Beige.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Beige_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Beige_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Beige.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Beige.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Beige.rvmat"
		};
	};
	class Bag_LeatherSack_Brown: Bag_LeatherSackBase
	{
		scope=1;
		displayName="Brown Leather Sack";
		color="Brown";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Brown_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Brown_destruct.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Brown.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat"
		};
	};
	class Bag_LeatherSack_Black: Bag_LeatherSackBase
	{
		scope=1;
		displayName="Black Leather Sack";
		color="Black";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Black_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_Black_destruct.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Black.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Black_damage.rvmat",
				"dz\characters\backpacks\data\Bag_LeatherSack_g_Black_destruct.rvmat"
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat"
		};
	};
	class BagAssault: BagBase
	{
		scope=2;
		displayName="Assault Backpack";
		absorbency=0.40000001;
		heatIsolation=0.1;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		descriptionShort="Standard field backpack issued to Chernarussian military personnel.";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		itemsCargoSize[]={6,6};
		randomQuantity=4;
		weight=900;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\boulder_m53.rvmat",
				"DZ\characters\backpacks\data\boulder_m53_damage.rvmat",
				"DZ\characters\backpacks\data\boulder_m53_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\boulder_m53_m.p3d";
			female="\DZ\characters\backpacks\boulder_m53_f.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa"
		};
	};
	class BagAssaultBlack: BagAssault
	{
		displayName="Black Assault Backpack";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa"
		};
	};
	class BagAssaultGreen: BagAssault
	{
		displayName="Green Assault Backpack";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa"
		};
	};
	class BagTortillaAbove: BagBase
	{
		scope=2;
		displayName="SPOSN Tortilla Backpack";
		descriptionShort="Medium sized assault backpack, it has one large chamber, two side pockets and two back pockets, wide shoulder straps with quick release, Sturdy and comfortable main belt, it's made of waterproof cordura.";
		absorbency=0;
		lootTag[]=
		{
			"Military",
			"Military_east",
			"Military_west"
		};
		heatIsolation=0.079999998;
		model="\dz\characters\backpacks\tortilla_g.p3d";
		itemsCargoSize[]={7,7};
		weight=2100;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\characters\backpacks\data\tortila.rvmat",
				"DZ\characters\backpacks\data\tortila_damage.rvmat",
				"DZ\characters\backpacks\data\tortila_destruct.rvmat"
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\tortilla_m_above.p3d";
			female="\DZ\characters\backpacks\tortilla_f_above.p3d";
		};
	};
};
