class CfgPatches
{
	class DZ_Weapons_Firearms_SVD
	{
		units[]=
		{
			"SVD"
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
	recoil_svd[]=
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
	recoil_svd_prone[]=
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
	class svdBase: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="SVD";
		descriptionShort="The Dragunov sniper rifle, officially Sniper Rifle, System of Dragunov, Model of the Year 1963 is a semi-automatic sniper/designated marksman rifle chambered in 7.62×54mmR and developed in the Soviet Union. The Dragunov was designed as a squad support weapon since, according to Soviet and Soviet-derived military doctrines, the long-range engagement ability was lost to ordinary troops when submachine guns and assault rifles were adopted.";
		model="\dz\weapons\firearms\svd\svd.p3d";
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
			"Military_east_special"
		};
		value=0;
		dexterity=2.3;
		optics=1;
		opticsFlare=0;
		chamberedRound="";
		chamberSize=1;
		magazines[]=
		{
			"M_svd_10Rnd"
		};
		camberableFrom[]=
		{
			"Ammo_762",
			"CLIP_762_5Rnd"
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
			"dz\sounds\weapons\firearms\svd\svd_reload",
			1,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\svd.rtm"
		};
		baseAttachments[]=
		{
			"Att_Optic_PSO1"
		};
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro",
			"weaponOpticsAK"
		};
		ejectType=1;
		reloadAction="ReloadSVD";
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
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
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
				"DZ\weapons\firearms\svd\Data\SVD.rvmat",
				"DZ\weapons\firearms\svd\Data\SVD_damage.rvmat",
				"DZ\weapons\firearms\svd\Data\SVD_destruct.rvmat"
			};
		};
	};
	class SVD: svdBase
	{
		scope=2;
	};
};
class CfgRecipes
{
};
