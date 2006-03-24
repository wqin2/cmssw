#include "DataFormats/TrackingRecHit/interface/InvalidTrackingRecHit.h"
#include "FWCore/Utilities/interface/Exception.h"

void InvalidTrackingRecHit::throwError() const {
  throw cms::Exception("Invalid TrackingRecHit used");
}

AlgebraicVector InvalidTrackingRecHit::parameters() const { 
  throwError();
  return AlgebraicVector();
}

AlgebraicSymMatrix InvalidTrackingRecHit::parametersError() const { 
  throwError();
  return AlgebraicSymMatrix();
}
  
AlgebraicMatrix InvalidTrackingRecHit::projectionMatrix() const { 
  throwError();
  return AlgebraicMatrix();
}

int InvalidTrackingRecHit::dimension() const { throwError(); return 0;}

LocalPoint InvalidTrackingRecHit::localPosition() const { 
  throwError();
  return LocalPoint();
}

LocalError InvalidTrackingRecHit::localPositionError() const { 
  throwError();
  return LocalError();
}


std::vector<const TrackingRecHit*> InvalidTrackingRecHit::recHits() const { 
  throwError();
  return std::vector<const TrackingRecHit*>();
}

std::vector<TrackingRecHit*> InvalidTrackingRecHit::recHits() { 
  throwError();
  return std::vector<TrackingRecHit*>();
}


