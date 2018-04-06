#include "test.h"

/***************************************************
                    THING (test)

  Cette classe correspond au cadre en bas � gauche
  avec diff�rents bidules interactifs assembl�s dessus
  VOIR LE CONSTRUCTEUR ET LA METHODE UPDATE EN DETAIL
  ( dans test.cpp ) pour d�crypter l'utilisation
  des widgets propos�s ( vous pouvez en ajouter d'autres
  en compl�tant widget.h et widget.cpp, r�pertoire
  de projet grman )
****************************************************/

/// Le constructeur de la classe (pas forc�ment par d�faut !)
/// initialise les donn�es des widgets, place la hi�rarchie des sous-cadres etc...

/// Tous les widgets sont des attributs directs (PAS DES POINTEURS, PAS DE NEW)
/// de la classe encapsulante (ici Thing) de telle sorte qu'ils sont d�truits
/// automatiquement quand la classe Thing est d�truite.
Thing::Thing()
{
    /// Le cadre d'ensemble de l'interface; x y coin sup. gauche, largeur, hauteur
    /// Le fond sera gris clair et on pourra le bouger � la souris (drag & drop)
    m_top_box.set_frame(0, 0, 1050, 1000);

    ///Flo Modifs

    m_top_box.add_child(m_bouton1);
    m_bouton1.add_child(m_image1);
    m_bouton1.set_frame_pos(10,10);
    m_bouton1.set_frame_dim(150,150);
    m_image1.set_pic_name("Tamere1.bmp");

    /*m_top_box.add_child(m_bouton2);
    m_bouton2.add_child(m_image2);
    m_bouton2.set_frame_pos(10,210);
    m_bouton2.set_frame_dim(150,150);
    m_image2.set_pic_name("Tamere2.bmp");*/

    m_top_box.add_child(m_bouton3);
    m_bouton3.add_child(m_image3);
    m_bouton3.set_frame_pos(10,410);
    m_bouton3.set_frame_dim(150,150);
    m_image3.set_pic_name("Tamere3.bmp");

    m_top_box.add_child(m_bouton4);
    m_bouton4.add_child(m_image4);
    m_bouton4.set_frame_pos(10,610);
    m_bouton4.set_frame_dim(150,150);
    m_image4.set_pic_name("Tamere4.bmp");

    if (m_bouton1.clicked())
    {

        /*m_top_box.add_child(m_bouton1bis);
        m_bouton1bis.add_child(m_image1bis);
        m_bouton1bis.set_frame_pos(10,210);
        m_bouton1bis.set_frame_dim(150,150);
        m_image1bis.set_pic_name("Tamere1bis.bmp");*/
    }

    //m_top_box.set_bg_color(GRISCLAIR);
    //m_top_box.set_moveable();


    /// On ajoute une image d'arbre cal�e au milieu en hauteur (par d�faut) et � droite
    //m_top_box.add_child( m_img );
    //m_img.set_pic_name("tree0.bmp");
    //m_img.set_gravity_x(grman::GravityX::Right);

    /*
    /// On ajoute une image anim�e au milieu en hauteur et en largeur (position par d�faut)
    /// Le nom du fichier doit contenir le nombre de cases de l'animation entre xx et xx
    /// (voir le fichier crusty_xx4xx.png dans le r�pertoire pics du projet.
    m_top_box.add_child( m_img_anime );
    m_img_anime.set_pic_name("crusty_xx4xx.png");

    /// On ajoute une check-box en bas � gauche
    m_top_box.add_child( m_marche );
    m_marche.set_dim(40, 20);
    m_marche.set_gravity_xy(grman::GravityX::Left, grman::GravityY::Down );

    /// On ajoute un texte en bas centr�
    m_top_box.add_child( m_legende );
    m_legende.set_message("<- CLICK ME");
    m_legende.set_gravity_y(grman::GravityY::Down );

    /// On ajoute en haut � gauche du cadre un sous-cadre (une boite dans la boite)
    m_top_box.add_child( m_boite_regles );
    m_boite_regles.set_dim(40, 80);
    m_boite_regles.set_gravity_xy(grman::GravityX::Left, grman::GravityY::Up );
    m_boite_regles.set_bg_color(SABLECLAIR);

    /// Dans ce sous cadre on ajoute 2 ascenseurs verticaux
    m_boite_regles.add_child( m_regle_reel );
    m_regle_reel.set_range(1, 10); // Par d�faut valeurs r�elles
    m_regle_reel.set_frame(4,5,15,70);

    m_boite_regles.add_child( m_regle_entier );
    m_regle_entier.set_range(1, 10, true); // 3�me param true => valeurs enti�res
    m_regle_entier.set_frame(20,5,15,70);
    m_regle_entier.set_value(6);

    /// On ajoute en haut � droite la boite � boutons
    m_top_box.add_child( m_boite_boutons );
    m_boite_boutons.set_dim(60,60);
    m_boite_boutons.set_gravity_xy(grman::GravityX::Right, grman::GravityY::Up );
    m_boite_boutons.set_bg_color(FUCHSIACLAIR);
    m_boite_boutons.set_moveable();

    /// Puis un 1er bouton avec un texte
    m_boite_boutons.add_child( m_bouton1 );
    m_bouton1.set_frame(3,3,32,16);
    m_bouton1.set_bg_color(FUCHSIA);

    m_bouton1.add_child(m_bouton1_label);
    m_bouton1_label.set_message("NEW");

    /// Puis un 2eme bouton avec une image
    m_boite_boutons.add_child( m_bouton2 );
    m_bouton2.set_dim(40,30);
    m_bouton2.set_gravity_xy(grman::GravityX::Left, grman::GravityY::Down);
    m_bouton2.set_bg_color(NOIR);
    m_bouton2.add_child(m_bouton2_image);
    m_bouton2_image.set_pic_name("clown_button.png");

    /// Puis la l�gende "DRAG ME" � droite
    m_boite_boutons.add_child( m_dragme );
    m_dragme.set_message("DRAG ME");
    m_dragme.set_vertical();
    m_dragme.set_gravity_x(grman::GravityX::Right);*/

}

/// Une m�thode update de la classe doit �tre appel�e dans la boucle de jeu
/// et cette m�thode doit propager l'appel � update sur les widgets contenus...
/// Cette m�thode fait le lien entre l'interface, les �v�nements, et les cons�quences
void Thing::update()
{

    /// Si tous les widgets d�pendants de l'objet sont dans une top box
    /// alors ce seul appel suffit (la propagation d'updates se fait ensuite automatiquement)
    m_top_box.update();

    /// Ici on montre la r�cup�ration de la valeur bool�enne du check box en bas � gauche
    /// pour d�cider d'animer ou pas le widget d'image au centre
    //m_img_anime.set_animate( m_marche.get_value() );

    /// Ici on montre la r�cup�ration de la valeur enti�re de l'ascenseur de droite
    /// pour d�cider du rythme d'animation
    //m_img_anime.set_animate_tempo( m_regle_entier.get_value() );

    /// Ici on montre la r�cup�ration de la valeur r�elle de l'ascenseur de gauche
    /// pour fixer l'ordonn�e de l'image au centre
    //m_img_anime.set_pos( m_img_anime.get_pos().x, 140-10.0*m_regle_reel.get_value() );

    /// Utilisation d'un bouton pour d�clencher un �v�nement
    /// L'acc�s � clicked() fait un reset : tant que le bouton n'est pas
    /// � nouveau cliqu� les futurs acc�s � clicked seront faux
    /// ( Donc il faut appeler clicked() UNE FOIS ET UNE SEULE par update )

    /*if ( m_bouton1.clicked() )
    {
        std::cout << "NEW !" << std::endl;

        /// Exp�rimental, ajout dynamique d'�l�ments, ATTENTION ICI ALLOCATION
        grman::WidgetImage * clown = new grman::WidgetImage(); // On pourrait d�clarer auto ...
        m_dynaclowns.push(clown);
        m_top_box.add_child( *clown );
        clown->set_pic_name("crusty_xx4xx.png");
        clown->set_pos(rand()%100+10, rand()%100+110 );
        clown->set_animate();
        clown->set_animate_tempo(rand()%5+3);

        /// Mise � jour du nombre de clowns dynamiques sur le label du lien
        m_lien2_label.set_message( std::to_string( m_dynaclowns.size() ) );
    }

    /// Utilisation de l'autre bouton (m�chant clown) pour enlever un clown
    if ( m_bouton2.clicked() && !m_dynaclowns.empty() )
    {
        std::cout << "ARGHHH !" << std::endl;

        /// Exp�rimental, retrait dynamique d'�l�ments
        grman::WidgetImage * clown = m_dynaclowns.top(); // On pourrait d�clarer auto ...
        m_dynaclowns.pop();

        // On est pas oblig� d'enlever les �l�ments dans l'ordre inverse de leur ajout
        // il suffit de se souvenir de l'adresse de l'�l�ment � supprimer
        m_top_box.remove_child( *clown );

        /// Le remove de la collection ne d�truit pas l'objet
        /// C'est la responsabilit� de la classe qui a fait new de faire delete
        delete clown;

        /// Mise � jour du nombre de clowns dynamiques sur le label du lien
        m_lien2_label.set_message( std::to_string( m_dynaclowns.size() ) );
    }*/
}


/// On a des allocations dynamiques dans m_dynaclowns => � nettoyer dans le destructeur
Thing::~Thing()
{
    /*while ( !m_dynaclowns.empty() )
    {
        delete m_dynaclowns.top();
        m_dynaclowns.pop();
    }*/
}
