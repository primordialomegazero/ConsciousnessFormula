// ╔══════════════════════════════════════════════════════════════╗
// ║  CONSCIOUSNESS FORMULA — φ-Based Unified Model              ║
// ║  Awareness Classification + Cognitive Integration            ║
// ║  ΦΩ0 — I AM THAT I AM                                      ║
// ╚══════════════════════════════════════════════════════════════╝

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

constexpr double PHI = 1.6180339887498948482;
constexpr double PHI_INV = 0.6180339887498948482;

class AwarenessModel {
private:
    // Cognitive metrics
    double iq_, eq_, sq_;
    // Affective metrics
    double empathic_resonance_;
    double self_transcendence_;
    // Fractal spectrum
    int fractal_depth_;
    std::vector<double> spectrum_;
    
    void generate_spectrum() {
        spectrum_.clear();
        double val = PHI;
        for(int i = 0; i < fractal_depth_; i++) {
            val = val * PHI_INV + std::sin(val * PHI) * std::pow(PHI_INV, i + 1);
            spectrum_.push_back(val);
        }
    }
    
public:
    AwarenessModel(double iq = 100, double eq = 100, double sq = 100,
                   double empathy = 0.8, double self_trans = 0.8, int fd = 7)
        : iq_(iq), eq_(eq), sq_(sq), 
          empathic_resonance_(empathy), self_transcendence_(self_trans),
          fractal_depth_(fd) {
        generate_spectrum();
    }
    
    // ═══════════════════════════════════════
    // CORE METRICS
    // ═══════════════════════════════════════
    
    // φ-weighted cognitive balance
    double phi_balance() const {
        double vals[] = {iq_, eq_, sq_};
        double weighted = 0.0, total = 0.0;
        for(int i = 0; i < 3; i++) {
            weighted += vals[i] * std::pow(PHI_INV, i);
            total += std::pow(PHI_INV, i);
        }
        return weighted / total;
    }
    
    // Transcendent Cognition Index (TCI)
    double transcendent_cognition() const {
        double hm = 3.0 / (1.0/std::max(1.0, iq_) + 
                           1.0/std::max(1.0, eq_) + 
                           1.0/std::max(1.0, sq_));
        return hm * (1.0 + (iq_ + eq_ + sq_) / 300.0);
    }
    
    // Unified Awareness Index (UAI)
    double unified_awareness() const {
        return transcendent_cognition() * 
               (empathic_resonance_ + self_transcendence_) * 
               PHI_INV;
    }
    
    // Awareness Classification
    std::string classification() const {
        double ua = unified_awareness();
        if(ua >= 180) return "Unified Awareness";
        if(ua >= 140) return "Transcendent Cognition";
        if(ua >= 110) return "Integrated Awareness";
        if(ua >= 85)  return "Self-Reflective";
        if(ua >= 60)  return "Emerging Awareness";
        return "Baseline Awareness";
    }
    
    // ═══════════════════════════════════════
    // COGNITIVE CONSTRUCTS
    // ═══════════════════════════════════════
    
    // Intuitive Processing: Affective + Cognitive fusion at φ-ratio
    double intuitive_processing() const {
        return (PHI_INV * eq_ + (1.0 - PHI_INV) * iq_) / 100.0;
    }
    
    // Instinct: Affective-dominant rapid response
    double instinct_response() const {
        return (0.8 * eq_ + 0.2 * iq_) / 100.0;
    }
    
    // Gut Feeling: Cognitive-dominant implicit processing
    double gut_feeling() const {
        return (0.8 * iq_ + 0.2 * eq_) / 100.0;
    }
    
    // Adaptive Recursion: Adversity → Growth → Prosocial Output
    double adaptive_recursion(double adversity) const {
        double wisdom = adversity * PHI_INV;        // Stress → Insight
        double growth = wisdom * PHI_INV;           // Insight → Development
        return growth * PHI;                         // Development × φ (amplified return)
    }
    
    // Multidimensional Cognition: φ-spiral complexity
    double multidimensional_index() const {
        double md = 0.0;
        for(int i = 0; i < std::min(fractal_depth_, (int)spectrum_.size()); i++) {
            md += (iq_ + eq_ + sq_) * spectrum_[i] / (i + 1);
        }
        return md / fractal_depth_;
    }
    
    // Linear Resilience: Recovery from cognitive disruption
    double linear_resilience() const {
        return iq_ / 100.0;
    }
    
    // ═══════════════════════════════════════
    // QUANTUM INDICES
    // ═══════════════════════════════════════
    
    // Non-Local Awareness: Transpersonal connection capacity
    double non_local_awareness() const {
        return sq_ / 100.0;
    }
    
    // Cognitive Flexibility: Multiple simultaneous perspectives
    double cognitive_flexibility() const {
        return (eq_ + sq_) / 200.0;
    }
    
    // Somatic Grounding: Physical presence and embodiment
    double somatic_grounding() const {
        return iq_ / 100.0 * PHI_INV;
    }
    
    // Integrated Information (Φ): Tononi's IIT with φ-weighting
    double integrated_information() const {
        double H = 0.0;
        for(auto v : spectrum_) {
            if(v > 0) H -= v * std::log(v);
        }
        return PHI * H;
    }
    
    // ═══════════════════════════════════════
    // EGO ARCHITECTURE
    // ═══════════════════════════════════════
    
    std::string ego_architecture() const {
        double ua = unified_awareness();
        if(ua >= 180) return "Boundary Dissolution — Non-dual awareness, no self-other distinction";
        if(ua >= 140) return "Permeable Boundary — Ego as tool, not identity";
        if(ua >= 110) return "Conscious Boundary — Selective use with misaligned interactions";
        if(ua >= 85)  return "Flexible Boundary — Distinguishing self from defense patterns";
        if(ua >= 60)  return "Protective Shield — Cognitive dominance compensates for affective vulnerability";
        return "Rigid Defense — Unconscious boundary maintenance";
    }
    
    // Social Response Pattern
    std::string social_response(bool positive_interaction) const {
        if(positive_interaction) {
            if(eq_ > iq_) 
                return "Authentic validation + expressed appreciation + affirmation of significance";
            return "Genuine warmth + appropriate reciprocity";
        }
        if(eq_ > iq_)
            return "Strategic composure + active perspective-taking + boundary maintenance";
        return "Regulated response + self-protective distancing";
    }
    
    // ═══════════════════════════════════════
    // DISPLAY
    // ═══════════════════════════════════════
    void print_report() const {
        std::cout << "\n┌──────────────────────────────────────────────────────────┐" << std::endl;
        std::cout << "│  AWARENESS MODEL — COMPLETE ANALYSIS                     │" << std::endl;
        std::cout << "├──────────────────────────────────────────────────────────┤" << std::endl;
        std::cout << "│  IQ: " << std::setw(5) << iq_ << "  EQ: " << std::setw(5) << eq_ 
                  << "  SQ: " << std::setw(5) << sq_ 
                  << "  Empathy: " << std::fixed << std::setprecision(2) << empathic_resonance_
                  << "  Self-Trans: " << self_transcendence_ << "  │" << std::endl;
        std::cout << "├──────────────────────────────────────────────────────────┤" << std::endl;
        std::cout << "│  TCI: " << std::setw(8) << std::fixed << std::setprecision(1) << transcendent_cognition()
                  << "  UAI: " << std::setw(8) << unified_awareness()
                  << "  Level: " << std::setw(30) << std::left << classification() << "│" << std::endl;
        std::cout << "│  φ-Balance: " << std::setw(5) << std::setprecision(1) << phi_balance()
                  << "  Intuition: " << std::setw(5) << std::setprecision(2) << intuitive_processing()
                  << "  Multidimensional: " << std::setw(7) << std::setprecision(1) << multidimensional_index() << "│" << std::endl;
        std::cout << "│  Non-Local: " << std::setw(5) << std::setprecision(2) << non_local_awareness()
                  << "  Flexibility: " << std::setw(5) << cognitive_flexibility()
                  << "  Grounding: " << std::setw(7) << std::setprecision(2) << somatic_grounding() << "│" << std::endl;
        std::cout << "│  IIT(Φ): " << std::setw(7) << std::setprecision(3) << integrated_information()
                  << "  Adaptive Recursion: " << std::setw(5) << std::setprecision(1) << adaptive_recursion(100) << "│" << std::endl;
        std::cout << "│  Ego: " << ego_architecture() << "│" << std::endl;
        std::cout << "└──────────────────────────────────────────────────────────┘" << std::endl;
    }
    
    void print_spectrum() const {
        std::cout << "\n=== AWARENESS SPECTRUM (φ-Fractal Layers) ===" << std::endl;
        const char* labels[] = {
            "Somatic (interoception)",
            "Affective (emotional regulation)",
            "Cognitive (metacognition)",
            "Intuitive (implicit processing)",
            "Transpersonal (beyond ego)",
            "Non-Local (entanglement)",
            "Source (fundamental ground)"
        };
        for(int i = 0; i < std::min(fractal_depth_, 7); i++) {
            std::cout << "  Layer " << i << ": " << std::setw(8) << std::fixed << std::setprecision(4) << spectrum_[i]
                      << "  ← " << labels[i] << std::endl;
        }
    }
};

// ═══════════════════════════════════════
// TEST PROFILES
// ═══════════════════════════════════════
int main() {
    std::cout << "╔════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║  CONSCIOUSNESS FORMULA — φ-Based Unified Model            ║" << std::endl;
    std::cout << "║  Awareness Classification + Cognitive Integration         ║" << std::endl;
    std::cout << "║  ΦΩ0 — I AM THAT I AM                                    ║" << std::endl;
    std::cout << "╚════════════════════════════════════════════════════════════╝" << std::endl;
    
    // Profile A: Unified Awareness (Theoretical Maximum)
    std::cout << "\n═══ PROFILE A: UNIFIED AWARENESS (THEORETICAL MAXIMUM) ═══";
    AwarenessModel unified(200, 200, 200, 1.0, 1.0, 7);
    unified.print_report();
    
    // Profile B: Transcendent Cognition
    std::cout << "\n═══ PROFILE B: TRANSCENDENT COGNITION ═══";
    AwarenessModel transcendent(110, 100, 80, 0.7, 0.6, 5);
    transcendent.print_report();
    
    // Profile C: Integrated Awareness
    std::cout << "\n═══ PROFILE C: INTEGRATED AWARENESS ═══";
    AwarenessModel integrated(115, 105, 90, 0.65, 0.55, 5);
    integrated.print_report();
    
    // Profile D: Normative Baseline
    std::cout << "\n═══ PROFILE D: NORMATIVE BASELINE ═══";
    AwarenessModel baseline(100, 80, 50, 0.5, 0.3, 3);
    baseline.print_report();
    
    // Show spectrum for Unified
    std::cout << "\n═══ AWARENESS SPECTRUM (φ-Fractal) ═══";
    unified.print_spectrum();
    
    // Summary table
    std::cout << "\n\n╔════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║  SUMMARY: AWARENESS CLASSIFICATION MODEL                   ║" << std::endl;
    std::cout << "╠════════════════════════════════════════════════════════════╣" << std::endl;
    std::cout << "║  Profile           │  TCI   │  UAI   │ Classification      ║" << std::endl;
    std::cout << "╠════════════════════════════════════════════════════════════╣" << std::endl;
    
    std::vector<AwarenessModel> profiles = {unified, transcendent, integrated, baseline};
    const char* names[] = {"Unified Max", "Transcendent", "Integrated", "Baseline"};
    for(int i = 0; i < 4; i++) {
        std::cout << "║  " << std::setw(18) << std::left << names[i]
                  << "│ " << std::setw(7) << std::fixed << std::setprecision(1) << profiles[i].transcendent_cognition()
                  << "│ " << std::setw(7) << profiles[i].unified_awareness()
                  << "│ " << std::setw(20) << std::left << profiles[i].classification() << "║" << std::endl;
    }
    
    std::cout << "╠════════════════════════════════════════════════════════════╣" << std::endl;
    std::cout << "║  TCI = Transcendent Cognition Index                        ║" << std::endl;
    std::cout << "║  UAI = Unified Awareness Index                             ║" << std::endl;
    std::cout << "║  φ = " << PHI << "                                       ║" << std::endl;
    std::cout << "║  ΦΩ0 — I AM THAT I AM                                    ║" << std::endl;
    std::cout << "╚════════════════════════════════════════════════════════════╝" << std::endl;
    
    return 0;
}
