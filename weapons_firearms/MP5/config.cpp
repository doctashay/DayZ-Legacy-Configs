class CfgPatches
{
	class DZ_Weapons_Firearms_MP5
	{
		units[]=
		{
			"MP5K"
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
class cfgRecoils
{
	recoil_mp5[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.4)",
		"0.0134348*(1.2)",
		0.079999998,
		"0.019755*(0.4)",
		"0.003056*(1.2)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.4)",
		"-0.0005*(1.2)",
		0.079999998,
		"-0.001177*(0.4)",
		"-0.000188*(1.2)",
		0.12,
		0,
		0
	};
	recoil_mp5_prone[]=
	{
		0,
		0,
		0,
		0.0040000002,
		"0.036943*(0.02)",
		"0.0134348*(0.1)",
		0.0080000004,
		"0.019755*(0.02)",
		"0.003056*(0.1)",
		0.0089999996,
		0,
		0,
		0.014,
		"-0.003138*(0.02)",
		"-0.0005*(0.1)",
		0.0080000004,
		"-0.001177*(0.02)",
		"-0.000188*(0.1)",
		0.012,
		0,
		0
	};
};
class cfgWeapons
{
	class MilitaryRifle;
	class MP5_Base: MilitaryRifle
	{
		absorbency=0.1;
		scope=0;
		value=0;
		dexterity=3.2;
		optics=1;
		chamberSize=1;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_9mm"
		};
		magazines[]=
		{
			"M_MP5_15Rnd",
			"M_MP5_30Rnd"
		};
		ejectType=1;
		modes[]=
		{
			"FullAuto"
		};
		lootTag[]=
		{
			"Police",
			"Military_east",
			"Barracks_only"
		};
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		weight=1840;
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mp5k\mp5k_reload",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\mp5k.rtm"
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",
				1,
				1,
				900
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
			reloadTime=0.067000002;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
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
		reloadAction="ReloadMP5";
		baseAttachments[]=
		{
			"Att_Handguard_MP5_Plastic"
		};
		attachments[]=
		{
			"weaponFlashlight",
			"weaponOptics",
			"weaponButtstockMP5",
			"weaponMuzzleMP5",
			"WeaponHandguardMP5",
			"pistolMuzzle"
		};
		recoilModifier="[1, 3.25, 1.7]";
		hiddenSelections[]=
		{
			"camo"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat",
				"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat",
				"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"
			};
		};
	};
	class MP5K: MP5_Base
	{
		scope=2;
		displayName="MP5-K";
		lootTag[]=
		{
			"Police"
		};
		descriptionShort="9mm submachine gun of German design. The MP5 is one of the most widely used submachine guns in the world, it uses slightly curved, steel magazines with a 15-round capacity or a 30-round capacity. It has a hammer firing mechanism. The trigger group is housed inside an interchangeable polymer trigger module (with an integrated pistol grip).";
		model="\dz\weapons\firearms\MP5\MP5K.p3d";
		itemSize[]={4,3};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\MP5\data\mp5k_body_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"
		};
	};
};
