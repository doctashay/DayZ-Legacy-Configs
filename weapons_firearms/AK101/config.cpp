class CfgPatches
{
	class DZ_Weapons_Firearms_AK101
	{
		units[]=
		{
			"AK101"
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
class cfgRecoils
{
	recoil_AK101[]=
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
	recoil_AK101_prone[]=
	{
		0,
		0,
		0,
		0.0040000002,
		"0.036943*(0.01)",
		"0.0134348*(0.1)",
		0.0080000004,
		"0.019755*(0.01)",
		"0.003056*(0.1)",
		0.0089999996,
		0,
		0,
		0.014,
		"-0.003138*(0.01)",
		"-0.0005*(0.1)",
		0.0080000004,
		"-0.001177*(0.01)",
		"-0.000188*(0.1)",
		0.012,
		0,
		0
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class AK101Base: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="AK101";
		descriptionShort="An assault rifle of the Kalashnikov series designed for the world export market, using 5.56×45mm NATO cartridges. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The rifle accepts most synthetic and metal AK-74-style magazines with 30 round capacity. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		model="\dz\weapons\firearms\AK101\ak101.p3d";
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		barrelArmor=2560;
		value=0;
		dexterity=2.75;
		optics=1;
		opticsFlare=0;
		chamberSize=1;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_556"
		};
		magazines[]=
		{
			"M_ak101_30Rnd",
			"M_ak101_30Rnd_Black",
			"M_ak101_30Rnd_Green"
		};
		modes[]=
		{
			"FullAuto"
		};
		lootTag[]=
		{
			"Military_west"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\akm\Akm_reload",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"
		};
		baseAttachments[]=
		{
			"Att_Buttstock_AK_Plastic",
			"Att_Handguard_AK_Plastic"
		};
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponHandguardAK",
			"weaponOpticsAK",
			"weaponFlashlight",
			"weaponBipod",
			"weaponWrap",
			"weaponMuzzleAK",
			"weaponBayonetAK",
			"suppressorImpro"
		};
		weight=3077;
		ejectType=1;
		reloadAction="ReloadAKM";
		recoilModifier="[1, 3.8, 1.9]";
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\AK101\ak101_single_0",
				1,
				1,
				800
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\AK101\ak101_single_0",
				1,
				1,
				800
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\AK101\ak101_single_0",
				1,
				1,
				800
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.1;
			recoil="recoil_AK101";
			recoilProne="recoil_AK101_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
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
	};
	class AK101: AK101Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AK101\data\ak101_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\AK101\data\ak101.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\AK101\Data\ak101.rvmat",
				"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat",
				"DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"
			};
		};
	};
	class AK101_Black: AK101
	{
		scope=1;
		displayName="AK101 Black";
		descriptionShort="Export version of AK74M. Chambered to use 556x45 NATO round. This one has been spraypainted black with poor success.";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)"
		};
	};
	class AK101_Green: AK101
	{
		scope=1;
		displayName="AK101 Green";
		descriptionShort="Export version of AK74M. Chambered to use 556x45 NATO round. This one has been spraypainted green.";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
};