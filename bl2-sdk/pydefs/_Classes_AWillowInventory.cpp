#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowInventory(py::module &m)
{
    py::class_< AWillowInventory,  AActor   >(m, "AWillowInventory")
        .def_readwrite("VfTable_IIBalancedActor", &AWillowInventory::VfTable_IIBalancedActor)
        .def_readwrite("VfTable_IIAttributeSlotEffectProvider", &AWillowInventory::VfTable_IIAttributeSlotEffectProvider)
        .def_readwrite("MonetaryValue", &AWillowInventory::MonetaryValue)
        .def_readwrite("MonetaryValueModifierTotal", &AWillowInventory::MonetaryValueModifierTotal)
        .def_readwrite("Quantity", &AWillowInventory::Quantity)
        .def_readwrite("RarityLevel", &AWillowInventory::RarityLevel)
        .def_readwrite("ExpLevel", &AWillowInventory::ExpLevel)
        .def_readwrite("GameStage", &AWillowInventory::GameStage)
        .def_readwrite("AwesomeLevel", &AWillowInventory::AwesomeLevel)
        .def_readwrite("AdditionalQueryInterfaceSource", &AWillowInventory::AdditionalQueryInterfaceSource)
        .def_readwrite("ClonedForSharing", &AWillowInventory::ClonedForSharing)
        .def_readwrite("LastCanBeUsedByResult", &AWillowInventory::LastCanBeUsedByResult)
        .def_readwrite("ZippyFrame", &AWillowInventory::ZippyFrame)
        .def_readwrite("ItemFrame", &AWillowInventory::ItemFrame)
        .def_readwrite("ElementalFrame", &AWillowInventory::ElementalFrame)
        .def_readwrite("SourceDefinitionName", &AWillowInventory::SourceDefinitionName)
        .def_readwrite("SourceResponsibleName", &AWillowInventory::SourceResponsibleName)
        .def_readwrite("ItemLocation", &AWillowInventory::ItemLocation)
        .def_readwrite("Mark", &AWillowInventory::Mark)
        .def_readwrite("RuntimeAttributeSlotSkill", &AWillowInventory::RuntimeAttributeSlotSkill)
        .def_readwrite("TempStatModifier", &AWillowInventory::TempStatModifier)
        .def_readwrite("TempStatModifierBaseValue", &AWillowInventory::TempStatModifierBaseValue)
        .def_readwrite("TempStatModifierModifierStack", &AWillowInventory::TempStatModifierModifierStack)
        .def_readwrite("AppliedAttributeSlotEffects", &AWillowInventory::AppliedAttributeSlotEffects)
        .def_readwrite("ExternalLikenessConsumers", &AWillowInventory::ExternalLikenessConsumers)
        .def_readwrite("Inventory", &AInventory::Inventory)
        .def_readwrite("InvManager", &AInventory::InvManager)
        .def_readwrite("ItemName", &AInventory::ItemName)
        .def_readwrite("RespawnTime", &AInventory::RespawnTime)
        .def_readwrite("MaxDesireability", &AInventory::MaxDesireability)
        .def_readwrite("PickupMessage", &AInventory::PickupMessage)
        .def_readwrite("MessageClass", &AInventory::MessageClass)
        .def_readwrite("PickupSound", &AInventory::PickupSound)
        .def_readwrite("DroppedPickupClass", &AInventory::DroppedPickupClass)
        .def_readwrite("DroppedPickupMesh", &AInventory::DroppedPickupMesh)
        .def_readwrite("PickupFactoryMesh", &AInventory::PickupFactoryMesh)
        .def("TryConsume", &AWillowInventory::TryConsume)
        .def("Consume", &AWillowInventory::Consume)
        .def("IsReadied", &AWillowInventory::IsReadied)
        .def("GetHolsteredGearLikenessType", &AWillowInventory::GetHolsteredGearLikenessType)
        .def("RemoveExternalLikenessConsumer", &AWillowInventory::RemoveExternalLikenessConsumer)
        .def("AddExternalLikenessConsumer", &AWillowInventory::AddExternalLikenessConsumer)
        .def("GetRarityLevel", &AWillowInventory::GetRarityLevel)
        .def("eventSetMark", &AWillowInventory::eventSetMark)
        .def("eventGetMark", &AWillowInventory::eventGetMark)
        .def("eventLogInventoryDebug", &AWillowInventory::eventLogInventoryDebug)
        .def("ResetTempStatModifier", &AWillowInventory::ResetTempStatModifier)
        .def("GetAttributeSlotModifierValue", &AWillowInventory::GetAttributeSlotModifierValue)
        .def("GetAttributeSlotGrade", &AWillowInventory::GetAttributeSlotGrade)
        .def("CloneAttributeSlotData", &AWillowInventory::CloneAttributeSlotData)
        .def("InitializeAttributeSlotsForNameParts", &AWillowInventory::InitializeAttributeSlotsForNameParts)
        .def("InitializeAttributeSlots", &AWillowInventory::InitializeAttributeSlots)
        .def("GetAttributeSlotIndex", &AWillowInventory::GetAttributeSlotIndex)
        .def("IsFindMissingAttributeSlotPresentationsDebugEnabled", &AWillowInventory::IsFindMissingAttributeSlotPresentationsDebugEnabled)
        .def("ToggleFindMissingAttributeSlotPresentationsDebugEnabled", &AWillowInventory::ToggleFindMissingAttributeSlotPresentationsDebugEnabled)
        .def("eventGetElementalFrame", &AWillowInventory::eventGetElementalFrame)
        .def("eventGetZippyFrame", &AWillowInventory::eventGetZippyFrame)
        .def("eventGetCategoryKey", &AWillowInventory::eventGetCategoryKey)
        .def("eventClonePrimaryMeshForUI", &AWillowInventory::eventClonePrimaryMeshForUI, py::return_value_policy::reference)
        .def("CloneInventorySkelMeshComponent", &AWillowInventory::CloneInventorySkelMeshComponent, py::return_value_policy::reference)
        .def("eventCloneAppearance", [](AWillowInventory &self , class AActor* CloneOwner, class USkeletalMeshComponent* ClonedPrimaryMeshComponent, TArray< class UPrimitiveComponent* >* ClonedComponentsAttachedToPrimaryMesh) { class UMaterialInstance** pyClonedMeshMaterial = 0 ;   self.eventCloneAppearance(CloneOwner, ClonedPrimaryMeshComponent, ClonedComponentsAttachedToPrimaryMesh, pyClonedMeshMaterial); return py::make_tuple(*pyClonedMeshMaterial); })
        .def("ClonePrimaryMesh", &AWillowInventory::ClonePrimaryMesh, py::return_value_policy::reference)
        .def("AttachMeshToPickup", &AWillowInventory::AttachMeshToPickup)
        .def("GetModelName", &AWillowInventory::GetModelName)
        .def("GetDroppedImpactDefinition", &AWillowInventory::GetDroppedImpactDefinition, py::return_value_policy::reference)
        .def("CompareUIStat", &AWillowInventory::CompareUIStat)
        .def("CanBeReadiedOnPickup", &AWillowInventory::CanBeReadiedOnPickup)
        .def("HandlePickupQuery", &AWillowInventory::HandlePickupQuery)
        .def("CanBeUsedBy", &AWillowInventory::CanBeUsedBy)
        .def("IsConsumable", &AWillowInventory::IsConsumable)
        .def("IsDLCRequirementMet", &AWillowInventory::IsDLCRequirementMet)
        .def("GetDLCRestrictedMessage", &AWillowInventory::GetDLCRestrictedMessage)
        .def("GetPawnController", &AWillowInventory::GetPawnController, py::return_value_policy::reference)
        .def("eventTranslateUseFailure", &AWillowInventory::eventTranslateUseFailure)
        .def("GetUseFailureOPLevelMessage", &AWillowInventory::GetUseFailureOPLevelMessage)
        .def("GetLastCanBeUsedByResult", &AWillowInventory::GetLastCanBeUsedByResult)
        .def("eventIsLevelRequirementMet", [](AWillowInventory &self , class AController* C) { int* pyRequiredLevel = (int*)malloc(sizeof(int)) ;  bool ret =  self.eventIsLevelRequirementMet(C, pyRequiredLevel); return py::make_tuple(ret, *pyRequiredLevel); })
        .def("GetControllerPlayerExpLevelRequiredToUse", &AWillowInventory::GetControllerPlayerExpLevelRequiredToUse)
        .def("GetPlayerExpLevelRequiredToUse", &AWillowInventory::GetPlayerExpLevelRequiredToUse)
        .def("CreateClone", &AWillowInventory::CreateClone, py::return_value_policy::reference)
        .def("GivenTo", &AWillowInventory::GivenTo)
        .def("eventIsItemAutoUsedBy", &AWillowInventory::eventIsItemAutoUsedBy)
        .def("GetInventorySpaceRequirement", &AWillowInventory::GetInventorySpaceRequirement)
        .def("ClientSoldTo", &AWillowInventory::ClientSoldTo)
        .def("RemoveFromShop", &AWillowInventory::RemoveFromShop)
        .def("SoldTo", &AWillowInventory::SoldTo)
        .def("MissionDenyPickup", &AWillowInventory::MissionDenyPickup)
        .def("CreatePickup", &AWillowInventory::CreatePickup, py::return_value_policy::reference)
        .def("GetPickup", &AWillowInventory::GetPickup, py::return_value_policy::reference)
        .def("eventDropFromNative", &AWillowInventory::eventDropFromNative, py::return_value_policy::reference)
        .def("DropFrom", &AWillowInventory::DropFrom, py::return_value_policy::reference)
        .def("GetDroppedPickupRotation", &AWillowInventory::GetDroppedPickupRotation)
        .def("PickupDisassociated", &AWillowInventory::PickupDisassociated)
        .def("PickupAssociated", &AWillowInventory::PickupAssociated)
        .def("eventSpawnPickup", &AWillowInventory::eventSpawnPickup, py::return_value_policy::reference)
        .def("eventInitConstructPreview", &AWillowInventory::eventInitConstructPreview, py::return_value_policy::reference)
        .def("PlayPickupSound", &AWillowInventory::PlayPickupSound)
        .def("AnnouncePickup", &AWillowInventory::AnnouncePickup)
        .def("GetTemplateString", &AWillowInventory::GetTemplateString)
        .def("ConsumeItem", &AWillowInventory::ConsumeItem)
        .def("eventGetHumanReadableNameNativeHook", &AWillowInventory::eventGetHumanReadableNameNativeHook)
        .def("eventGetInventoryCardString", &AWillowInventory::eventGetInventoryCardString)
        .def("GetPresentationDefinition", &AWillowInventory::GetPresentationDefinition, py::return_value_policy::reference)
        .def("eventGetShortHumanReadableName", &AWillowInventory::eventGetShortHumanReadableName)
        .def("GetHumanReadableName", &AWillowInventory::GetHumanReadableName)
        .def("CanThrow", &AWillowInventory::CanThrow)
        .def("CanInventoryBeSoldOrStoredByOwner", &AWillowInventory::CanInventoryBeSoldOrStoredByOwner)
        .def("CanInventoryBeDroppedByOwner", &AWillowInventory::CanInventoryBeDroppedByOwner)
        .def("PassesDroppabilityCheck", &AWillowInventory::PassesDroppabilityCheck)
        .def("StaticCreateCompositeMesh", &AWillowInventory::StaticCreateCompositeMesh, py::return_value_policy::reference)
        .def("OverrideMonetaryValue", &AWillowInventory::OverrideMonetaryValue)
        .def("ComputeMonetaryValue", &AWillowInventory::ComputeMonetaryValue)
        .def("GetCappedCurrencyAmount", &AWillowInventory::GetCappedCurrencyAmount)
        .def("GetMonetaryValueInCurrency", &AWillowInventory::GetMonetaryValueInCurrency)
        .def("GetMonetaryValue", &AWillowInventory::GetMonetaryValue)
        .def("GetCurrencyTypeInventoryIsValuedIn", &AWillowInventory::GetCurrencyTypeInventoryIsValuedIn)
        .def("ClientInitializeInventoryFromDefinition", &AWillowInventory::ClientInitializeInventoryFromDefinition)
        .def("eventInitializeInventory", &AWillowInventory::eventInitializeInventory)
        .def("GetUniqueID", &AWillowInventory::GetUniqueID)
        .def("GenerateUniqueID", &AWillowInventory::GenerateUniqueID)
        .def("GetBalancedActorTypeIdentifier", &AWillowInventory::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &AWillowInventory::SetExpLevel)
        .def("SetAwesomeLevel", &AWillowInventory::SetAwesomeLevel)
        .def("SetGameStage", &AWillowInventory::SetGameStage)
        .def("GetExpLevelForEquip", &AWillowInventory::GetExpLevelForEquip)
        .def("GetExpLevel", &AWillowInventory::GetExpLevel)
        .def("GetAwesomeLevel", &AWillowInventory::GetAwesomeLevel)
        .def("GetGameStage", &AWillowInventory::GetGameStage)
        .def("ApplyExternalSlotEffectModifiers", &AWillowInventory::ApplyExternalSlotEffectModifiers)
        .def("ApplyInternalSlotEffectModifiers", &AWillowInventory::ApplyInternalSlotEffectModifiers)
        .def("GetManufacturerGradeIndex", &AWillowInventory::GetManufacturerGradeIndex)
        .def("GetManufacturer", &AWillowInventory::GetManufacturer, py::return_value_policy::reference)
        .def("GetInventoryDefinition", &AWillowInventory::GetInventoryDefinition, py::return_value_policy::reference)
        .def("IsLevelRequirementsDebugEnabled", &AWillowInventory::IsLevelRequirementsDebugEnabled)
        .def("ToggleLevelRequirementsDebug", &AWillowInventory::ToggleLevelRequirementsDebug)
        .def("GetAttributeSlotIndexByAttributeDef", &AWillowInventory::GetAttributeSlotIndexByAttributeDef)
        .def("GetEquippedStat", &AWillowInventory::GetEquippedStat)
        .def("ResetSerialNumber", &AWillowInventory::ResetSerialNumber)
        .def("IsSKULoaded", &AWillowInventory::IsSKULoaded)
        .def("IsSerialNumberNone", &AWillowInventory::IsSerialNumberNone)
        .def("PeekIsItem", &AWillowInventory::PeekIsItem)
        .def("PeekIsWeapon", &AWillowInventory::PeekIsWeapon)
        .def("GetSerialNumberString", &AWillowInventory::GetSerialNumberString)
        .def("CreateSerialNumber", &AWillowInventory::CreateSerialNumber)
        .def("CreateInventoryFromSerialNumberString", &AWillowInventory::CreateInventoryFromSerialNumberString, py::return_value_policy::reference)
        .def("CreateInventoryFromSerialNumber", &AWillowInventory::CreateInventoryFromSerialNumber, py::return_value_policy::reference)
        .def("Unreadied", &AInventory::Unreadied)
        .def("Readied", &AInventory::Readied)
        .def("Unready", &AInventory::Unready)
        .def("Ready", &AInventory::Ready)
        .def("eventCanBeUsedBy", &AInventory::eventCanBeUsedBy)
        .def("GetLocalString", &AInventory::GetLocalString)
        .def("DenyPickupQuery", &AInventory::DenyPickupQuery)
        .def("ItemRemovedFromInvManager", &AInventory::ItemRemovedFromInvManager)
        .def("ClientGivenTo", &AInventory::ClientGivenTo)
        .def("eventGiveTo", &AInventory::eventGiveTo)
        .def("DetourWeight", &AInventory::DetourWeight)
        .def("BotDesireability", &AInventory::BotDesireability)
        .def("eventDestroyed", &AInventory::eventDestroyed)
        .def("eventReplicatedEvent", &AInventory::eventReplicatedEvent)
          ;
}