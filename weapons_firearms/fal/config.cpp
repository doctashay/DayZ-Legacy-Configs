class CfgPatches
{
	class DZ_Weapons_Firearms_FAL
	{
		units[]=
		{
			"FAL"
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
	recoil_fal[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.5)",
		"0.0134348*(2)",
		0.079999998,
		"0.019755*(0.5)",
		"0.003056*(2)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.5)",
		"-0.0005*(2)",
		0.079999998,
		"-0.001177*(0.5)",
		"-0.000188*(2)",
		0.12,
		0,
		0
	};
	recoil_fal_prone[]=
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
class cfgWeapons
{
	class Rifle;
	class FalBase: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="FAL";
		descriptionShort="The right arm of the free world.";
		model="\dz\weapons\firearms\fal\fal_rifle.p3d";
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		barrelArmor=3000;
		class NoiseShoot
		{
			strength=150;
			type="shot";
		};
		weight=3700;
		lootTag[]=
		{
			"Military_west"
		};
		value=0;
		dexterity=2.3;
		optics=1;
		opticsFlare=0;
		chamberSize=1;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_308Win"
		};
		magazines[]=
		{
			"M_Fal_20Rnd"
		};
		modes[]=
		{
			"SemiAuto"
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
			"dz\sounds\weapons\firearms\ump45\ump45_reload",
			0.80000001,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\fn_fal.rtm"
		};
		reloadAction="ReloadFal";
		baseAttachments[]=
		{
			"Att_Buttstock_FalOe"
		};
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro",
			"weaponButtstockFal"
		};
		ejectType=1;
		class SemiAuto: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_2",
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
			reloadTime=0.1;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.00075000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
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
		recoilModifier="[1, 5, 2]";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\fal\data\fal.rvmat",
				"DZ\weapons\firearms\fal\data\fal_damage.rvmat",
				"DZ\weapons\firearms\fal\data\fal_destruct.rvmat"
			};
		};
	};
	class Fal: FalBase
	{
		scope=2;
	};
};
