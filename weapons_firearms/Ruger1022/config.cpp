class CfgPatches
{
	class DZ_Weapons_Firearms_Ruger1022
	{
		units[]=
		{
			"Ruger1022",
			"Ruger1022_Black",
			"Ruger1022_Green"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle;
	class Ruger1022Base: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="Sporter 22";
		descriptionShort="A popular rifle which uses the .22Long Rifle rimfire cartridge, one of the most common type of ammunition available worldwide.  Its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		model="\dz\weapons\firearms\Ruger1022\Ruger1022.p3d";
		repairableWith=1;
		useModelOptics=0;
		modelOptics="-";
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={50};
		discreteDistanceInitIndex=1;
		barrelArmor=300;
		value=0;
		dexterity=3.1500001;
		optics=1;
		opticsFlare=0;
		lootTag[]=
		{
			"Civilian",
			"Hunting"
		};
		recoilModifier="[1, 2, 1.5]";
		chamberSize=1;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_22"
		};
		magazines[]=
		{
			"M_22_Ruger_30Rnd",
			"M_22_Ruger_10Rnd"
		};
		modes[]=
		{
			"Single"
		};
		weight=2300;
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\ruger1022.rtm"
		};
		baseAttachments[]={};
		class NoiseShoot
		{
			strength=35;
			type="shot";
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",
				1,
				1,
				300
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_1auth",
				1,
				1,
				300
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_2",
				1,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				0.050000001,
				1,
				50
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=0.1;
			recoil="recoil_single_primary_1outof10";
			recoilProne="recoil_single_primary_1outof10";
			dispersion=0.0024999999;
			magazineSlot="magazine";
		};
		ejectType=1;
		reloadAction="ReloadRuger1022";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro",
			"weaponOpticsHunting"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"
		};
	};
	class Ruger1022: Ruger1022Base
	{
		scope=2;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\Ruger1022\Data\ruger1022.rvmat",
				"DZ\weapons\firearms\Ruger1022\Data\ruger1022_damage.rvmat",
				"DZ\weapons\firearms\Ruger1022\Data\ruger1022_destruct.rvmat"
			};
		};
	};
	class Ruger1022_Black: Ruger1022Base
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\Ruger1022\data\ruger1022.rvmat",
				"DZ\weapons\firearms\Ruger1022\data\ruger1022_damage.rvmat",
				"DZ\weapons\firearms\Ruger1022\data\ruger1022_destruct.rvmat"
			};
		};
	};
	class Ruger1022_Green: Ruger1022Base
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\Ruger1022\data\ruger1022.rvmat",
				"DZ\weapons\firearms\Ruger1022\data\ruger1022_damage.rvmat",
				"DZ\weapons\firearms\Ruger1022\data\ruger1022_destruct.rvmat"
			};
		};
	};
};
