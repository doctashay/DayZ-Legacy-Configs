class CfgPatches
{
	class DZ_Weapons_Firearms_Trumpet
	{
		units[]=
		{
			"Trumpet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgVehicles
{
	class InventoryBase;
	class TrumpetParts: InventoryBase
	{
		absorbency=0.1;
		scope=2;
		handheld="true";
		armAction="Disarm";
		itemSize[]={2,3};
		weight=2000;
		displayName="Disassembled Trumpet";
		descriptionShort=".22 caliber takedown pump-action rifle, with 11 round internal tubular magazine. Can be quickly disassembled into two pieces, significantly reducing it's length, making it easier to store, pack, transport and conceal.";
		model="\dz\weapons\firearms\Trumpet\trumpet_parts.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\tools\pen.rtm"
		};
		rotateDropped=1;
		lootTag[]=
		{
			"Civilian",
			"Hunting"
		};
		barrelArmor=600;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat",
				"DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat",
				"DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"
			};
		};
		class Melee
		{
			range=0.64999998;
			swingTime=0.5;
			action="GestureMeleeBayonetStab";
			ammo="MeleeFist";
			useCursor=1;
		};
	};
};
class cfgWeapons
{
	class Rifle;
	class TrumpetBase: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="Trumpet";
		descriptionShort=".22 caliber takedown pump-action rifle, with 11 round internal tubular magazine. Can be quickly disassembled into two pieces, significantly reducing it's length, making it easier to store, pack, transport and conceal.";
		model="\dz\weapons\firearms\Trumpet\trumpet.p3d";
		itemSize[]={6,2};
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		tooltip="_text = _this call fnc_generateTooltip;_text";
		value=0;
		dexterity=3.5;
		optics=1;
		opticsFlare=0;
		recoilModifier="[1, 2.5, 1.5]";
		chamberSize=7;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_22"
		};
		magazines[]={};
		modes[]=
		{
			"Single"
		};
		lootTag[]=
		{
			"Civilian",
			"Hunting"
		};
		drySound[]=
		{
			"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\trombone\trombone_reload",
			0.80000001,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\trombone\trombone_pump",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\trumpet.rtm"
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
				"dz\sounds\weapons\firearms\trombone\trombone_shot_0",
				0.80000001,
				1,
				300
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\trombone\trombone_shot_1",
				0.80000001,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				0.050000001,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=1;
			recoil="recoil_single_primary_1outof10";
			recoilProne="recoil_single_primary_1outof10";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat",
				"DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat",
				"DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"
			};
		};
		ejectType=1;
		reloadAction="ReloadTrumpet";
		shotAction="ReloadTrumpet_shot";
		animClass="Shotgun";
		attachments[]=
		{
			"suppressorImpro",
			"weaponOpticsHunting"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Trumpet\data\trombone_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Trumpet\data\trumpet.rvmat"
		};
	};
	class Trumpet: TrumpetBase
	{
		scope=2;
		weight=2000;
		lootCategory="Rifles";
		animName="Trumpet";
	};
};
