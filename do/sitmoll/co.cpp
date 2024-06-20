AController* GetPlayerController() {
    // Get the cached PlayerController reference
    APlayerController* PlayerController = Cast<APlayerController>(GetWorld()->GetFirstPlayerController());
    return PlayerController;
}

UPathFollowingComponent* GetPathFollowingComponent(AController* Controller) {
    if (Controller) {
        // Get the cached PathFollowingComponent reference
        UPathFollowingComponent* PathFollowingComponent = Controller->FindComponentByClass<UPathFollowingComponent>();
        return PathFollowingComponent;
    }
    return nullptr;
}
