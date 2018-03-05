##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Kernel
ConfigurationName      :=Release
WorkspacePath          := "/home/irvan/Projects/JauraKernel"
ProjectPath            := "/home/irvan/Projects/JauraKernel/Kernel"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Irvan
Date                   :=05/03/18
CodeLitePath           :="/home/irvan/.codelite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Kernel.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)$(ProjectPath)/Include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Core_Main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Class_String.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Release || $(MakeDirCommand) ./Release


$(IntermediateDirectory)/.d:
	@test -d ./Release || $(MakeDirCommand) ./Release

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Core_Main.cpp$(ObjectSuffix): Core/Main.cpp $(IntermediateDirectory)/Core_Main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/irvan/Projects/JauraKernel/Kernel/Core/Main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Core_Main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Core_Main.cpp$(DependSuffix): Core/Main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Core_Main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Core_Main.cpp$(DependSuffix) -MM "Core/Main.cpp"

$(IntermediateDirectory)/Core_Main.cpp$(PreprocessSuffix): Core/Main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Core_Main.cpp$(PreprocessSuffix) "Core/Main.cpp"

$(IntermediateDirectory)/Class_String.cpp$(ObjectSuffix): Class/String.cpp $(IntermediateDirectory)/Class_String.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/irvan/Projects/JauraKernel/Kernel/Class/String.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Class_String.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Class_String.cpp$(DependSuffix): Class/String.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Class_String.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Class_String.cpp$(DependSuffix) -MM "Class/String.cpp"

$(IntermediateDirectory)/Class_String.cpp$(PreprocessSuffix): Class/String.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Class_String.cpp$(PreprocessSuffix) "Class/String.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


