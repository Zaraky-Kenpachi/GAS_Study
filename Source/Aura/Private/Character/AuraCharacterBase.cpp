#include "Character/AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	MainHand = CreateDefaultSubobject<USkeletalMeshComponent>("MainHand");
	MainHand->SetupAttachment(GetMesh(), FName("MainHandSocket"));
	MainHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	OffHand = CreateDefaultSubobject<USkeletalMeshComponent>("OffHand");
	OffHand->SetupAttachment(GetMesh(), FName("OffHandSocket"));
	OffHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}