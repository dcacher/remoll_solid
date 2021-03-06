
#ifndef __REMOLLSTEPPINGACTION_HH
#define __REMOLLSTEPPINGACTION_HH

#include "G4UserSteppingAction.hh"
#include "globals.hh"

class remollSteppingAction : public G4UserSteppingAction
{
  public:
    remollSteppingAction();
    virtual ~remollSteppingAction(){};

    virtual void UserSteppingAction(const G4Step*);

    void SetEnableKryptonite(G4bool k){ fEnableKryptonite = k; }
    void SetMinimumEnergyCut(G4double energycut){ fEnergy_cut = energycut;}

  private:
    G4bool drawFlag;

    G4bool fEnableKryptonite;
    G4double fKryptoniteThresh;
    
    G4double fEnergy_cut;
  public:
    inline void SetDrawFlag(G4bool val)
    { drawFlag = val; };

};

#endif//__REMOLLSTEPPINGACTION_HH
