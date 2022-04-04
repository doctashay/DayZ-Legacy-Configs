class CfgPatches
{
	class DZ_Weapons_Firearms_aug
	{
		units[]=
		{
			"AugSteyr"
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
	class MilitaryRifle;
	class AugSteyr_Base: MilitaryRifle
	{
		absorbency=0.1;
		scope=0;
		value=0;
		dexterity=3;
		optics=1;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"M_STANAG_30Rnd",
			"M_STANAG_30Rnd_Coupled",
			"M_CMAG_10Rnd",
			"M_CMAG_20Rnd",
			"M_CMAG_30Rnd",
			"M_CMAG_40Rnd",
			"M_CMAG_10Rnd_Green",
			"M_CMAG_20Rnd_Green",
			"M_CMAG_30Rnd_Green",
			"M_CMAG_40Rnd_Green",
			"M_CMAG_10Rnd_Black",
			"M_CMAG_20Rnd_Black",
			"M_CMAG_30Rnd_Black",
			"M_CMAG_40Rnd_Black"
		};
		camberableFrom[]=
		{
			"Ammo_556"
		};
		ejectType=1;
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		barrelArmor=2390;
		repairableWith=1;
		modelOptics="-";
		lootTag[]=
		{
			"Military_west"
		};
		opticsFlare=1;
		opticsPPEffects[]=
		{
			"-"
		};
		opticsZoomMin=0.28;
		opticsZoomMax=0.28;
		opticsZoomInit=0.28;
		distanceZoomMin=300;
		distanceZoomMax=300;
		discreteDistance[]={300};
		discreteDistanceInitIndex=1;
		weight=3600;
		model="\dz\weapons\firearms\aug\aug.p3d";
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\steyraug\steyraug_reload",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\aug.rtm"
		};
		baseAttachments[]={};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",
				1,
				1,
				1000
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
			reloadTime=0.085000001;
			recoil="recoil_single_primary_5outof10";
			recoilProne="recoil_single_primary_prone_5outof10";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				100
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",
				1,
				1,
				1000
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
			reloadTime=0.090000004;
			recoil="recoil_auto_primary_5outof10";
			recoilProne="recoil_auto_primary_prone_5outof10";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				100
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		reloadAction="ReloadAug";
		attachments[]=
		{
			"weaponMuzzleM4",
			"suppressorImpro"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
	};
	class AugSteyr: AugSteyr_Base
	{
		scope=2;
		displayName="Steyr AUG Automatic Rifle";
		descriptionShort="The AUG, a bullpup 5.56mm automatic rifle, is a selective fire weapon with a conventional gas piston operated action that fires from a closed bolt. It can be quickly adapted to a wide variety of roles with the change of the barrel to a desired length and profile, the AUG is a modular configuration rifle that employs a high level of polymer and advanced alloy components.";
		spawnDamageMax=0.60000002;
	};
};
